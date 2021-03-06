/**
 * \file
 * \brief Configuration header file for SDK_BitIO
 *
 * This header file is used to configure settings of the SDK Bit I/O module.
 */
#ifndef __SDA1_CONFIG_H
#define __SDA1_CONFIG_H

#if MCUC1_CONFIG_SDK_VERSION_USED == MCUC1_CONFIG_SDK_MCUXPRESSO_2_0
  #include "pin_mux.h" /* include pin muxing header file */

  #if defined(BOARD_INITPINS_SDA1_PIN)
    #define SDA1_CONFIG_PIN_NUMBER    BOARD_INITPINS_SDA1_PIN
  #endif
  #if defined(BOARD_INITPINS_SDA1_GPIO)
    #define SDA1_CONFIG_GPIO_NAME     BOARD_INITPINS_SDA1_GPIO
  #endif
  #if defined(BOARD_INITPINS_SDA1_PORT)
    #define SDA1_CONFIG_PORT_NAME     BOARD_INITPINS_SDA1_PORT
  #endif
#endif


#ifndef SDA1_CONFIG_PORT_NAME
  #if MCUC1_CONFIG_CPU_IS_IMXRT
    #define SDA1_CONFIG_PORT_NAME       GPIO1
  #elif MCUC1_CONFIG_CPU_IS_LPC
    #define SDA1_CONFIG_PORT_NAME       0
  #else /* name from properties */
    #define SDA1_CONFIG_PORT_NAME       PTE
  #endif
    /*!< name of PORT, is pointer to PORT_Type */
#endif

#ifndef SDA1_CONFIG_GPIO_NAME
  #if MCUC1_CONFIG_CPU_IS_IMXRT
    #define SDA1_CONFIG_GPIO_NAME       GPIO1
  #elif MCUC1_CONFIG_CPU_IS_LPC
    #define SDA1_CONFIG_GPIO_NAME       GPIO
  #else /* name from properties */
    #define SDA1_CONFIG_GPIO_NAME       
  #endif
    /*!< name of GPIO, is pointer to GPIO_Type, not used for S32K SDK */
#endif

#ifndef SDA1_CONFIG_PIN_NUMBER
  #define SDA1_CONFIG_PIN_NUMBER      10u
    /*!< number of pin, type unsigned integer */
#endif

#ifndef SDA1_CONFIG_PIN_SYMBOL
  #define SDA1_CONFIG_PIN_SYMBOL      
    /*!< symbolic name for pin, used for NXP SDK V1.3 */
#endif

#ifndef SDA1_CONFIG_INIT_PIN_VALUE
  #define SDA1_CONFIG_INIT_PIN_VALUE  0
  /*!< 0: Pin data is initialized with 0 (low); 1: pin value is initialized with 1 (high) */
#endif

/* different types of pin direction settings */
#define SDA1_CONFIG_INIT_PIN_DIRECTION_NONE    (0)
#define SDA1_CONFIG_INIT_PIN_DIRECTION_INPUT   (1)
#define SDA1_CONFIG_INIT_PIN_DIRECTION_OUTPUT  (2)

#ifndef SDA1_CONFIG_INIT_PIN_DIRECTION
  #define SDA1_CONFIG_INIT_PIN_DIRECTION  SDA1_CONFIG_INIT_PIN_DIRECTION_OUTPUT
#endif

#ifndef SDA1_CONFIG_DO_PIN_MUXING
  #define SDA1_CONFIG_DO_PIN_MUXING  0
  /*!< 1: perform pin muxing in Init(), 0: do not do pin muxing */
#endif

#ifndef SDA1_CONFIG_PULL_RESISTOR
  #define SDA1_CONFIG_PULL_RESISTOR  0
  /*!< pull resistor setting. 0: no pull resistor, 1: pull-up, 2: pull-down, 3: pull-up or no pull, 4: pull-down or no pull: 4: autoselect-pull */
#endif

#endif /* __SDA1_CONFIG_H */
