/*-------------------------------------------------------------------------------------------------------------------*/
/**
 *    \file       Led_Cfg.h
 *    \author     Baciu Vlad-Eusebiu
 *    \brief      Defines the configurable macros and types of the software component.
 */
/*-------------------------------------------------------------------------------------------------------------------*/

#ifndef LED_CFG_H
#define LED_CFG_H

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                                     Inclusions                                                    */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                            Definition Of Global Macros                                            */
/*-------------------------------------------------------------------------------------------------------------------*/
/** \brief  Defines the number of instances to be used in the core. */
#define LED_NUMBER_OF_INSTANCES           (3U)

/* Define the indexes of all the instances. The indexes must be zero based and consistency between input and output
 * values must be ensured. */
#define LED_LEFT_INDEX                      (0U)
#define LED_CENTER_INDEX                    (1U)
#define LED_RIGHT_INDEX                     (2U)

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                          Definition Of Global Data Types                                          */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Variables                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Constants                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
/*                                             Export Of Global Functions                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------------------------------------*/
#endif /* LED_CFG_H */
