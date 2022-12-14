/****************************************************************************
 * boards/arm/cxd56xx/spresense/include/cxd56_imageproc.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#ifndef __BOARDS_ARM_CXD56XX_SPRESENSE_INCLUDE_CXD56_IMAGEPROC_H
#define __BOARDS_ARM_CXD56XX_SPRESENSE_INCLUDE_CXD56_IMAGEPROC_H

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

/****************************************************************************
 * Public Types
 ****************************************************************************/

/* Structure of rectangle coordinates from left top point to
 * right bottom point.
 */

  struct imageproc_rect_s
    {
      uint16_t x1;               /* X coordinate of left top point */
      uint16_t y1;               /* Y coordinate of left top point */
      uint16_t x2;               /* X coordinate of rignt bottom point */
      uint16_t y2;               /* Y coordinate of rignt bottom point */
    };
  typedef struct imageproc_rect_s imageproc_rect_t;

/* Enumeration of image type */

  enum imageproc_imginfo_e
    {
      IMAGEPROC_IMGTYPE_SINGLE = 0, /* All pixels have the same value */
      IMAGEPROC_IMGTYPE_BINARY = 1, /* Each pixels have 0 or specific non-zero value */
      IMAGEPROC_IMGTYPE_8BPP   = 2, /* Each pixels have 8bit value */
      IMAGEPROC_IMGTYPE_16BPP  = 3, /* Each pixels have 16bit value */
    };

/* Structure of binary image */

  struct imageproc_binary_img_s
    {
      uint8_t *p_u8;      /* 1bpp image */
      int     multiplier; /* specific non-zero value */
    };
  typedef struct imageproc_binary_img_s imageproc_binary_img_t;

/* Structure of image information. */

  struct imageproc_imginfo_s
    {
      enum imageproc_imginfo_e type;     /* Type of image data    */
      int  w;                            /* width  of total image */
      int  h;                            /* height of total image */
      imageproc_rect_t *rect;            /* clipped rectangle     */
      union
        {
          int                    single; /* type = IMAGEPROC_IMGTYPE_SINGLE */
          imageproc_binary_img_t binary; /* type = IMAGEPROC_IMGTYPE_BINARY */
          uint8_t                *p_u8;  /* type = IMAGEPROC_IMGTYPE_8BPP   */
          uint16_t               *p_u16; /* type = IMAGEPROC_IMGTYPE_16BPP  */
        } img;
    };
  typedef struct imageproc_imginfo_s imageproc_imginfo_t;

/****************************************************************************
 * Public Functions Prototypes
 ****************************************************************************/

/* Initialize imageproc library
 */

  void imageproc_initialize(void);

/* Finalize imageproc library
 */

  void imageproc_finalize(void);

/* Convert color format (YUV to RGB)
 *
 * TODO: need more description here
 *
 *  [in,out] ibuf: image
 *  [in] hsize: Horizontal size
 *  [in] vsize: Vertical size
 *
 * return 0 on success, otherwise error code.
 */

  int imageproc_convert_yuv2rgb(uint8_t * ibuf, uint32_t hsize,
                                uint32_t vsize);

/* Convert color format (RGB to YUV)
 *
 *  [in,out] ibuf: image
 *  [in] hsize: Horizontal size
 *  [in] vsize: Vertical size
 *
 * return 0 on success, otherwise error code.
 */

  int imageproc_convert_rgb2yuv(uint8_t * ibuf, uint32_t hsize,
                                uint32_t vsize);

/* Convert color format (YUV to grayscale)
 *
 * TODO: need more description here
 *
 *  [in] ibuf: Input image
 *  [out] obuf: Output buffer
 *  [in] hsize: Horizontal size
 *  [in] vsize: Vertical size
 */

  void imageproc_convert_yuv2gray(uint8_t * ibuf, uint8_t * obuf,
                                  size_t hsize, size_t vsize);

/* Resize image
 *
 * Resize image specified by ibuf to ohsize, ovsize. Processed
 * image will be stored to obuf.
 *
 * For ohsize and ovsize, specify output size calculated by multiply
 * in range 1/2^n to 2^n (n=0..5) against ihsize and ivsize.
 *
 * This function can be processing for YUV422 color format.
 *  So all of specified sizes must be multiple of 2.
 *
 * And there is limitation about output size below.
 *
 * * Shrink
 *   + Horizontal size least 12 pixels
 *   + Vertical size least 12 pixels
 * * Enlarge
 *   + Horizontal size up to 768 pixels
 *   + Vertical size up to 1024 pixels
 *
 *  [in] ibuf: Input image
 *  [in] ihsize: Input horizontal size
 *  [in] ivsize: Input vertical size
 *  [out] obuf: Output buffer
 *  [in] ohsize: Output horizontal size
 *  [in] ovsize: Output vertical size
 *  [in] bpp: Bits per pixel (16 or 8)
 *
 * return 0 on success, otherwise error code.
 */

  int imageproc_resize(uint8_t * ibuf, uint16_t ihsize, uint16_t ivsize,
                       uint8_t * obuf, uint16_t ohsize, uint16_t ovsize,
                       int bpp);

/* Clip and Resize image
 *
 *  [in] ibuf: Input image
 *  [in] ihsize: Input horizontal size
 *  [in] ivsize: Input vertical size
 *  [out] obuf: Output buffer
 *  [in] ohsize: Output horizontal size
 *  [in] ovsize: Output vertical size
 *  [in] bpp: Bits per pixel (16 or 8)
 *  [in] clip_rect: Clipping rectangle on input image.
 *
 * return 0 on success, otherwise error code.
 */

  int imageproc_clip_and_resize(uint8_t * ibuf, uint16_t ihsize,
                                uint16_t ivsize, uint8_t * obuf,
                                uint16_t ohsize, uint16_t ovsize, int bpp,
                                imageproc_rect_t * clip_rect);

/* Execute alpha blending
 *
 * Execute alpha blending.
 * dst buffer is overwritten by blended image.
 *
 *  [in,out] dst: Destination image.
 *                dst->type = IMAGEPROC_IMGTYPE_16BPP.
 *  [in] pos_x:   x-coordinate of blended position.
 *                Minus value means
 *                the left of the destination image origin.
 *  [in] pos_y:   y-coordinate of blended position.
 *                Minus value means
 *                the upper of the destination image origin.
 *  [in] src:     Source image.
 *                src->type = IMAGEPROC_IMGTYPE_16BPP or
 *                IMAGEPROC_IMGTYPE_SINGLE.
 *  [in] alpha:   Alpha plane.
 *                alpha->type = IMAGEPROC_IMGTYPE_SINGLE,
 *                IMAGEPROC_IMGTYPE_BINARY,
 *                or IMAGEPROC_IMGTYPE_8BPP.
 *
 * return 0 on success, otherwise error code.
 */

  int imageproc_alpha_blend(imageproc_imginfo_t *dst, int pos_x, int pos_y,
                            imageproc_imginfo_t *src,
                            imageproc_imginfo_t *alpha);

#ifdef __cplusplus
}
#endif

#endif /* __BOARDS_ARM_CXD56XX_SPRESENSE_INCLUDE_CXD56_IMAGEPROC_H */
