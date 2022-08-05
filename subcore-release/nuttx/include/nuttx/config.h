/* config.h -- Autogenerated! Do not edit. */

#ifndef __INCLUDE_NUTTX_CONFIG_H
#define __INCLUDE_NUTTX_CONFIG_H

/* General Definitions ***********************************/
/* Used to represent the values of tristate options */

#define CONFIG_y 1
#define CONFIG_m 2

/* Architecture-specific options *************************/

#define CONFIG_HOST_LINUX 1
#define CONFIG_APPS_DIR "../sdk/apps"
#define CONFIG_BUILD_FLAT 1
#define CONFIG_ARCH_HAVE_MATH_H 1
#define CONFIG_ARCH_FLOAT_H 1
#define CONFIG_ARCH_HAVE_STDARG_H 1
#define CONFIG_ARCH_HAVE_SETJMP 1
#define CONFIG_ARCH_NONE_DEBUG_H 1
#define CONFIG_DEBUG_ALERT 1
#define CONFIG_ARCH_HAVE_STACKCHECK 1
#define CONFIG_STACK_COLORATION 1
#define CONFIG_STACK_USAGE_SAFE_PERCENT 0
#define CONFIG_ARCH_HAVE_HEAPCHECK 1
#define CONFIG_DEBUG_SYMBOLS 1
#define CONFIG_ARCH_HAVE_CUSTOMOPT 1
#define CONFIG_DEBUG_FULLOPT 1
#define CONFIG_ARCH_ARM 1
#define CONFIG_ARCH "arm"
#define CONFIG_ARCH_CHIP_CXD56XX 1
#define CONFIG_ARCH_ARMV7M 1
#define CONFIG_ARCH_CORTEXM4 1
#define CONFIG_ARCH_FAMILY "armv7-m"
#define CONFIG_ARCH_CHIP "cxd56xx"
#define CONFIG_ARM_HAVE_MPU_UNIFIED 1
#define CONFIG_ARCH_HAVE_HARDFAULT_DEBUG 1
#define CONFIG_ARCH_HAVE_MEMFAULT_DEBUG 1
#define CONFIG_ARMV7M_USEBASEPRI 1
#define CONFIG_ARMV7M_TOOLCHAIN_GNU_EABIL 1
#define CONFIG_CXD56_ARCH_OPTS 1
#define CONFIG_CXD56_FCBGA 1
#define CONFIG_CXD56_SUBCORE 1
#define CONFIG_CXD56_CUSTOM_PINCONFIG 1
#define CONFIG_CXD56_BACKUPLOG 1
#define CONFIG_CXD56_XOSC_CLOCK 26000000
#define CONFIG_CXD56_SPH 1
#define CONFIG_CXD56_CPUFIFO 1
#define CONFIG_CXD56_ICC 1
#define CONFIG_CXD56_CPUFIFO_ENTRIES 8
#define CONFIG_CXD56_CPUFIFO_NBUFFERS 8
#define CONFIG_CXD56_RTC 1
#define CONFIG_CXD56_RTC_LATEINIT 1
#define CONFIG_CXD56_TIMER 1
#define CONFIG_CXD56_TIMER_DIVIDER_1 1
#define CONFIG_CXD56_WDT 1
#define CONFIG_CXD56_WDT_INTERRUPT 1
#define CONFIG_CXD56_PM 1
#define CONFIG_CXD56_DMAC 1
#define CONFIG_CXD56_GPIO_IRQ 1
#define CONFIG_CXD56_UART1 1
#define CONFIG_CXD56_UART2 1
#define CONFIG_CXD56_SPI 1
#define CONFIG_CXD56_SPI_DRIVER 1
#define CONFIG_CXD56_SPI_DMATHRESHOLD 64
#define CONFIG_CXD56_SPI3 1
#define CONFIG_CXD56_SPI3_CS0 1
#define CONFIG_CXD56_SPI4 1
#define CONFIG_CXD56_DMAC_SPI4_TX 1
#define CONFIG_CXD56_DMAC_SPI4_TX_CH 2
#define CONFIG_CXD56_DMAC_SPI4_TX_MAXSIZE 192000
#define CONFIG_CXD56_DMAC_SPI4_RX 1
#define CONFIG_CXD56_DMAC_SPI4_RX_CH 3
#define CONFIG_CXD56_DMAC_SPI4_RX_MAXSIZE 192000
#define CONFIG_CXD56_SPI5 1
#define CONFIG_CXD56_SPI5_PINMAP_EMMC 1
#define CONFIG_CXD56_I2C 1
#define CONFIG_CXD56_I2C0 1
#define CONFIG_CXD56_I2C1 1
#define CONFIG_CXD56_PWM 1
#define CONFIG_CXD56_PWM0 1
#define CONFIG_CXD56_PWM1 1
#define CONFIG_CXD56_PWM2 1
#define CONFIG_CXD56_PWM3 1
#define CONFIG_CXD56_ADC 1
#define CONFIG_CXD56_HPADC0 1
#define CONFIG_CXD56_HPADC0_FREQ 7
#define CONFIG_CXD56_HPADC0_INPUT_GAIN_M6DB 1
#define CONFIG_CXD56_HPADC0_OFFSET 0
#define CONFIG_CXD56_HPADC0_GAIN 0
#define CONFIG_CXD56_HPADC0_FSIZE 64
#define CONFIG_CXD56_HPADC1 1
#define CONFIG_CXD56_HPADC1_FREQ 7
#define CONFIG_CXD56_HPADC1_INPUT_GAIN_M6DB 1
#define CONFIG_CXD56_HPADC1_OFFSET 0
#define CONFIG_CXD56_HPADC1_GAIN 0
#define CONFIG_CXD56_HPADC1_FSIZE 64
#define CONFIG_CXD56_LPADC 1
#define CONFIG_CXD56_LPADC_ALL 1
#define CONFIG_CXD56_LPADC0_FREQ 7
#define CONFIG_CXD56_LPADC0_OFFSET 0
#define CONFIG_CXD56_LPADC0_GAIN 0
#define CONFIG_CXD56_LPADC0_FSIZE 16
#define CONFIG_CXD56_LPADC1_FREQ 7
#define CONFIG_CXD56_LPADC1_OFFSET 0
#define CONFIG_CXD56_LPADC1_GAIN 0
#define CONFIG_CXD56_LPADC1_FSIZE 16
#define CONFIG_CXD56_LPADC2_FREQ 7
#define CONFIG_CXD56_LPADC2_OFFSET 0
#define CONFIG_CXD56_LPADC2_GAIN 0
#define CONFIG_CXD56_LPADC2_FSIZE 16
#define CONFIG_CXD56_LPADC3_FREQ 7
#define CONFIG_CXD56_LPADC3_OFFSET 0
#define CONFIG_CXD56_LPADC3_GAIN 0
#define CONFIG_CXD56_LPADC3_FSIZE 16
#define CONFIG_CXD56_SCU 1
#define CONFIG_CXD56_SCU_PREDIV 64
#define CONFIG_CXD56_SCU_RCOSC 1
#define CONFIG_CXD56_SCU32K_RTC 1
#define CONFIG_CXD56_GE2D 1
#define CONFIG_ARCH_BOARD "spresense"
#define CONFIG_ARCH_TOOLCHAIN_GNU 1
#define CONFIG_ARCH_HAVE_IRQTRIGGER 1
#define CONFIG_ARCH_DMA 1
#define CONFIG_ARCH_HAVE_IRQPRIO 1
#define CONFIG_ARCH_HAVE_TEXT_HEAP 1
#define CONFIG_ARCH_HAVE_MULTICPU 1
#define CONFIG_ARCH_HAVE_VFORK 1
#define CONFIG_ARCH_HAVE_FPU 1
#define CONFIG_ARCH_HAVE_LAZYFPU 1
#define CONFIG_ARCH_HAVE_MPU 1
#define CONFIG_ARCH_HAVE_POWEROFF 1
#define CONFIG_ARCH_HAVE_RESET 1
#define CONFIG_ARCH_HAVE_TESTSET 1
#define CONFIG_ARCH_HAVE_SYSCALL_HOOKS 1
#define CONFIG_ARCH_FPU 1
#define CONFIG_ARCH_STACKDUMP 1
#define CONFIG_ARCH_HAVE_RAMVECTORS 1
#define CONFIG_BOARD_LOOPSPERMSEC 5434
#define CONFIG_ARCH_HAVE_INTERRUPTSTACK 1
#define CONFIG_ARCH_INTERRUPTSTACK 2048
#define CONFIG_ARCH_HAVE_HIPRI_INTERRUPT 1
#define CONFIG_BOOT_RUNFROMISRAM 1
#define CONFIG_RAM_START 0x0d000000
#define CONFIG_RAM_SIZE 1572864
#define CONFIG_ARCH_BOARD_SPRESENSE 1
#define CONFIG_ARCH_HAVE_LEDS 1
#define CONFIG_ARCH_HAVE_BUTTONS 1
#define CONFIG_ARCH_HAVE_IRQBUTTONS 1
#define CONFIG_BOARD_CUSTOM_PINCONFIG 1
#define CONFIG_BOARD_USB_DISABLE_IN_DEEP_SLEEPING 1
#define CONFIG_CXD56_IMAGEPROC 1
#define CONFIG_SPRESENSE_EXTENSION 1
#define CONFIG_SDCARD_TXS02612 1
#define CONFIG_SDCARD_TXS02612_PORT0 1
#define CONFIG_LCD_ON_EXTENSION_BOARD 1
#define CONFIG_LCD_RSTPIN_SPI2_MISO 1
#define CONFIG_LCD_DCPIN_PWM2 1
#define CONFIG_WIFI_BOARD_IS110B_HARDWARE_VERSION_10A 1
#define CONFIG_CXD56_BINARY 1
#define CONFIG_BOARD_CRASHDUMP 1
#define CONFIG_BOARDCTL 1
#define CONFIG_DISABLE_OS_API 1
#define CONFIG_DISABLE_ENVIRON 1
#define CONFIG_USEC_PER_TICK 10000
#define CONFIG_CLOCK_MONOTONIC 1
#define CONFIG_START_YEAR 2011
#define CONFIG_START_MONTH 12
#define CONFIG_START_DAY 6
#define CONFIG_PREALLOC_TIMERS 4
#define CONFIG_INIT_ENTRYPOINT 1
#undef CONFIG_INIT_ARGS
#define CONFIG_USER_ENTRYPOINT spresense_main
#define CONFIG_USERMAIN_STACKSIZE 8192
#define CONFIG_USERMAIN_PRIORITY 100
#define CONFIG_RR_INTERVAL 200
#define CONFIG_TASK_NAME_SIZE 31
#define CONFIG_SCHED_HAVE_PARENT 1
#define CONFIG_SCHED_CHILD_STATUS 1
#define CONFIG_PREALLOC_CHILDSTATUS 0
#define CONFIG_SCHED_WAITPID 1
#define CONFIG_PTHREAD_MUTEX_ROBUST 1
#define CONFIG_DEV_CONSOLE 1
#define CONFIG_SDCLONE_DISABLE 1
#define CONFIG_NFILE_DESCRIPTORS_PER_BLOCK 8
#define CONFIG_FILE_STREAM 1
#define CONFIG_NAME_MAX 64
#define CONFIG_PATH_MAX 256
#define CONFIG_BOARD_LATE_INITIALIZE 1
#define CONFIG_BOARD_INITTHREAD_STACKSIZE 2048
#define CONFIG_BOARD_INITTHREAD_PRIORITY 240
#define CONFIG_SIG_PREALLOC_IRQ_ACTIONS 8
#define CONFIG_SIG_SIGUSR1 1
#define CONFIG_SIG_SIGUSR2 2
#define CONFIG_SIG_SIGALRM 3
#define CONFIG_SIG_SIGCHLD 4
#define CONFIG_SIG_PIPE 13
#define CONFIG_SIG_SIGCONDTIMEDOUT 16
#define CONFIG_SIG_SIGWORK 17
#define CONFIG_PREALLOC_MQ_MSGS 4
#define CONFIG_PREALLOC_MQ_IRQ_MSGS 8
#define CONFIG_MQ_MAXMSGSIZE 32
#define CONFIG_SCHED_WORKQUEUE 1
#define CONFIG_SCHED_HPWORK 1
#define CONFIG_SCHED_HPNTHREADS 1
#define CONFIG_SCHED_HPWORKPRIORITY 224
#define CONFIG_SCHED_HPWORKSTACKSIZE 2048
#define CONFIG_DEFAULT_TASK_STACKSIZE 2048
#define CONFIG_IDLETHREAD_STACKSIZE 1024
#define CONFIG_PTHREAD_STACK_MIN 256
#define CONFIG_PTHREAD_STACK_DEFAULT 2048
#define CONFIG_ARCH_HAVE_RDWR_MEM_CPU_RUN 1
#define CONFIG_I2C 1
#define CONFIG_SPI 1
#define CONFIG_SPI_EXCHANGE 1
#define CONFIG_SPI_DRIVER 1
#define CONFIG_PWM 1
#define CONFIG_TIMER 1
#define CONFIG_RTC 1
#define CONFIG_RTC_HIRES 1
#define CONFIG_RTC_FREQUENCY 32768
#define CONFIG_RTC_DRIVER 1
#define CONFIG_WATCHDOG 1
#define CONFIG_WATCHDOG_DEVPATH "/dev/watchdog0"
#define CONFIG_LCD 1
#define CONFIG_LCD_NOGETRUN 1
#define CONFIG_LCD_MAXCONTRAST 63
#define CONFIG_LCD_MAXPOWER 1
#define CONFIG_LCD_LANDSCAPE 1
#define CONFIG_POWER 1
#define CONFIG_ARCH_HAVE_SERIAL_TERMIOS 1
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_CONSOLE 1
#define CONFIG_MCU_SERIAL 1
#define CONFIG_SERIAL_NPOLLWAITERS 4
#define CONFIG_SERIAL_IFLOWCONTROL 1
#define CONFIG_SERIAL_OFLOWCONTROL 1
#define CONFIG_SERIAL_TERMIOS 1
#define CONFIG_UART1_SERIAL_CONSOLE 1
#define CONFIG_UART1_SERIALDRIVER 1
#define CONFIG_UART2_SERIALDRIVER 1
#define CONFIG_UART1_RXBUFSIZE 16
#define CONFIG_UART1_TXBUFSIZE 16
#define CONFIG_UART1_BAUD 115200
#define CONFIG_UART1_BITS 8
#define CONFIG_UART1_PARITY 0
#define CONFIG_UART1_2STOP 0
#define CONFIG_UART2_RXBUFSIZE 256
#define CONFIG_UART2_TXBUFSIZE 256
#define CONFIG_UART2_BAUD 115200
#define CONFIG_UART2_BITS 8
#define CONFIG_UART2_PARITY 0
#define CONFIG_UART2_2STOP 0
#define CONFIG_UART2_IFLOWCONTROL 1
#define CONFIG_UART2_OFLOWCONTROL 1
#define CONFIG_SYSLOG_MAX_CHANNELS 1
#define CONFIG_SYSLOG_DEFAULT 1
#define CONFIG_FS_LARGEFILE 1
#define CONFIG_FS_NEPOLL_DESCRIPTORS 8
#define CONFIG_SENDFILE_BUFSIZE 512
#define CONFIG_FS_MQUEUE_MPATH "/var/mqueue"
#define CONFIG_FS_MQUEUE_NPOLLWAITERS 4
#define CONFIG_MM_DEFAULT_MANAGER 1
#define CONFIG_MM_REGIONS 1
#define CONFIG_STDIO_BUFFER_SIZE 64
#define CONFIG_STDIO_LINEBUFFER 1
#define CONFIG_NUNGET_CHARS 2
#define CONFIG_LIBC_FLOATINGPOINT 1
#define CONFIG_LIBC_LONG_LONG 1
#define CONFIG_EOL_IS_EITHER_CRLF 1
#define CONFIG_LIBM 1
#define CONFIG_ARCH_LOWPUTC 1
#define CONFIG_LIBC_RAND_ORDER 1
#define CONFIG_LIBC_TMPDIR "/tmp"
#define CONFIG_LIBC_MAX_TMPFILE 32
#define CONFIG_POSIX_SPAWN_PROXY_STACKSIZE 1024
#define CONFIG_TASK_SPAWN_DEFAULT_STACKSIZE 2048
#define CONFIG_LIBC_HOSTNAME ""
#define CONFIG_LIBC_WCHAR 1
#define CONFIG_LIBC_LOCALE 1
#define CONFIG_TLS_NELEM 4
#define CONFIG_NETDB_BUFSIZE 256
#define CONFIG_BUILTIN 1
#define CONFIG_HAVE_CXX 1
#define CONFIG_LIBCXX 1
#define CONFIG_LIBSUPCXX 1
#define CONFIG_HAVE_CXXINITIALIZE 1
#define CONFIG_NSH_LIBRARY 1
#define CONFIG_NSH_PROMPT_STRING "nsh> "
#define CONFIG_NSH_READLINE 1
#define CONFIG_NSH_LINELEN 160
#define CONFIG_NSH_CMDPARMS 1
#define CONFIG_NSH_MAXARGUMENTS 16
#define CONFIG_NSH_NESTDEPTH 3
#define CONFIG_NSH_BUILTIN_APPS 1
#define CONFIG_NSH_DISABLE_BASENAME 1
#define CONFIG_NSH_DISABLE_CAT 1
#define CONFIG_NSH_DISABLE_CD 1
#define CONFIG_NSH_DISABLE_CP 1
#define CONFIG_NSH_DISABLE_CMP 1
#define CONFIG_NSH_DISABLE_DD 1
#define CONFIG_NSH_DISABLE_DF 1
#define CONFIG_NSH_DISABLE_DIRNAME 1
#define CONFIG_NSH_DISABLE_ECHO 1
#define CONFIG_NSH_DISABLE_EXEC 1
#define CONFIG_NSH_DISABLE_EXIT 1
#define CONFIG_NSH_DISABLE_HEXDUMP 1
#define CONFIG_NSH_DISABLE_IFCONFIG 1
#define CONFIG_NSH_DISABLE_IFUPDOWN 1
#define CONFIG_NSH_DISABLE_KILL 1
#define CONFIG_NSH_DISABLE_LOSETUP 1
#define CONFIG_NSH_DISABLE_LOSMART 1
#define CONFIG_NSH_DISABLE_LS 1
#define CONFIG_NSH_DISABLE_MB 1
#define CONFIG_NSH_DISABLE_MKDIR 1
#define CONFIG_NSH_DISABLE_MKRD 1
#define CONFIG_NSH_DISABLE_MH 1
#define CONFIG_NSH_DISABLE_MOUNT 1
#define CONFIG_NSH_DISABLE_MV 1
#define CONFIG_NSH_DISABLE_MW 1
#define CONFIG_NSH_DISABLE_PRINTF 1
#define CONFIG_NSH_DISABLE_PS 1
#define CONFIG_NSH_DISABLE_PWD 1
#define CONFIG_NSH_DISABLE_RM 1
#define CONFIG_NSH_DISABLE_RMDIR 1
#define CONFIG_NSH_DISABLE_SET 1
#define CONFIG_NSH_DISABLE_SOURCE 1
#define CONFIG_NSH_DISABLE_TEST 1
#define CONFIG_NSH_DISABLE_TRUNCATE 1
#define CONFIG_NSH_DISABLE_UMOUNT 1
#define CONFIG_NSH_DISABLE_UNAME 1
#define CONFIG_NSH_DISABLE_UNSET 1
#define CONFIG_NSH_DISABLE_USLEEP 1
#define CONFIG_NSH_MMCSDMINOR 0
#define CONFIG_NSH_CODECS_BUFSIZE 128
#define CONFIG_NSH_FILEIOSIZE 1024
#define CONFIG_NSH_DISABLESCRIPT 1
#define CONFIG_NSH_CONSOLE 1
#define CONFIG_NSH_ARCHINIT 1
#define CONFIG_ASMP 1
#define CONFIG_MM_TILE 1
#define CONFIG_ASMP_MEMSIZE 0xc0000
#define CONFIG_DIGITAL_FILTER 1
#define CONFIG_DIGITAL_FILTER_FIR 1
#define CONFIG_DIGITAL_FILTER_DECIMATOR 1
#define CONFIG_DIFITAL_FILTER_EDGE_DETECT 1
#define CONFIG_EXTERNALS_CMSIS 1
#define CONFIG_EXTERNALS_CMSIS_DSP 1
#define CONFIG_EXTERNALS_CMSIS_DSP_ARM_MATH_LOOPUNROLL 1
#define CONFIG_EXTERNALS_CMSIS_NN 1
#define CONFIG_SYSTEM_CLE 1
#define CONFIG_SYSTEM_CLE_DEBUGLEVEL 0
#define CONFIG_SYSTEM_NSH 1
#define CONFIG_SYSTEM_NSH_PRIORITY 100
#define CONFIG_SYSTEM_NSH_STACKSIZE 2048
#define CONFIG_SYSTEM_NSH_PROGNAME "nsh"
#define CONFIG_READLINE_HAVE_EXTMATCH 1
#define CONFIG_SYSTEM_READLINE 1
#define CONFIG_READLINE_ECHO 1
#define CONFIG_READLINE_TABCOMPLETION 1
#define CONFIG_READLINE_MAX_BUILTINS 64
#define CONFIG_READLINE_MAX_EXTCMDS 64
#define CONFIG_READLINE_CMD_HISTORY 1
#define CONFIG_READLINE_CMD_HISTORY_LINELEN 160
#define CONFIG_READLINE_CMD_HISTORY_LEN 16

/* Sanity Checks *****************************************/

/* If this is an NXFLAT, external build, then make sure that
 * NXFLAT support is enabled in the base code.
 */

#if defined(__NXFLAT__) && !defined(CONFIG_NXFLAT)
# error "NXFLAT support not enabled in this configuration"
#endif

/* NXFLAT requires PIC support in the TCBs. */

#if defined(CONFIG_NXFLAT)
#  undef  CONFIG_PIC
#  define CONFIG_PIC 1
#endif

/* Binary format support is disabled if no binary formats are
 * configured (at present, NXFLAT is the only supported binary.
 * format).
 */

#if !defined(CONFIG_NXFLAT) && !defined(CONFIG_ELF) \
    && !defined(CONFIG_BUILTIN)
#  undef CONFIG_BINFMT_DISABLE
#  define CONFIG_BINFMT_DISABLE 1
#endif

/* The correct way to disable RR scheduling is to set the
 * timeslice to zero.
 */

#ifndef CONFIG_RR_INTERVAL
#  define CONFIG_RR_INTERVAL 0
#endif

/* If no file streams are configured, then make certain that
 * buffered I/O support is disabled
 */

#ifndef CONFIG_FILE_STREAM
#  undef  CONFIG_STDIO_BUFFER_SIZE
#  undef  CONFIG_STDIO_LINEBUFFER
#  undef  CONFIG_STDIO_DISABLE_BUFFERING
#  define CONFIG_STDIO_DISABLE_BUFFERING 1
#endif

/* If priority inheritance is disabled, then do not allocate any
 * associated resources.
 */

#if !defined(CONFIG_PRIORITY_INHERITANCE) \
    || !defined(CONFIG_SEM_PREALLOCHOLDERS)
#  undef CONFIG_SEM_PREALLOCHOLDERS
#  define CONFIG_SEM_PREALLOCHOLDERS 0
#endif

#if !defined(CONFIG_PRIORITY_INHERITANCE) \
    || !defined(CONFIG_SEM_NNESTPRIO)
#  undef  CONFIG_SEM_NNESTPRIO
#  define CONFIG_SEM_NNESTPRIO 0
#endif

/* If the end of RAM is not specified then it is assumed to be
 * the beginning of RAM plus the RAM size.
 */

#ifndef CONFIG_RAM_END
#  define CONFIG_RAM_END (CONFIG_RAM_START+CONFIG_RAM_SIZE)
#endif

#ifndef CONFIG_RAM_VEND
#  define CONFIG_RAM_VEND (CONFIG_RAM_VSTART+CONFIG_RAM_SIZE)
#endif

/* If the end of FLASH is not specified then it is assumed to be
 * the beginning of FLASH plus the FLASH size.
 */

#ifndef CONFIG_FLASH_END
#  define CONFIG_FLASH_END (CONFIG_FLASH_START+CONFIG_FLASH_SIZE)
#endif

/* If the maximum message size is zero, then we assume that
 * message queues support should be disabled
 */

#if !defined(CONFIG_MQ_MAXMSGSIZE) || defined(CONFIG_DISABLE_MQUEUE)
#  undef CONFIG_MQ_MAXMSGSIZE
#  define CONFIG_MQ_MAXMSGSIZE 0
#endif

#if CONFIG_MQ_MAXMSGSIZE <= 0 && !defined(CONFIG_DISABLE_MQUEUE)
#  define CONFIG_DISABLE_MQUEUE 1
#endif

#endif /* __INCLUDE_NUTTX_CONFIG_H */