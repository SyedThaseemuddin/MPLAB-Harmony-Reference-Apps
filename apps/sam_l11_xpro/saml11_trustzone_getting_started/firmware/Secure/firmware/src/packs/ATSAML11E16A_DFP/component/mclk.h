/**
 * \brief Component description for MCLK
 *
 * Copyright (c) 2020 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2020-08-24T19:30:38Z */
#ifndef _SAML11_MCLK_COMPONENT_H_
#define _SAML11_MCLK_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MCLK                                         */
/* ************************************************************************** */

/* -------- MCLK_CTRLA : (MCLK Offset: 0x00) (R/W 8) Control -------- */
#define MCLK_CTRLA_RESETVALUE                 _U_(0x00)                                            /**<  (MCLK_CTRLA) Control  Reset Value */

#define MCLK_CTRLA_CKSEL_Pos                  _U_(2)                                               /**< (MCLK_CTRLA) Clock Select Position */
#define MCLK_CTRLA_CKSEL_Msk                  (_U_(0x1) << MCLK_CTRLA_CKSEL_Pos)                   /**< (MCLK_CTRLA) Clock Select Mask */
#define MCLK_CTRLA_CKSEL(value)               (MCLK_CTRLA_CKSEL_Msk & ((value) << MCLK_CTRLA_CKSEL_Pos))
#define MCLK_CTRLA_Msk                        _U_(0x04)                                            /**< (MCLK_CTRLA) Register Mask  */


/* -------- MCLK_INTENCLR : (MCLK Offset: 0x01) (R/W 8) Interrupt Enable Clear -------- */
#define MCLK_INTENCLR_RESETVALUE              _U_(0x00)                                            /**<  (MCLK_INTENCLR) Interrupt Enable Clear  Reset Value */

#define MCLK_INTENCLR_CKRDY_Pos               _U_(0)                                               /**< (MCLK_INTENCLR) Clock Ready Interrupt Enable Position */
#define MCLK_INTENCLR_CKRDY_Msk               (_U_(0x1) << MCLK_INTENCLR_CKRDY_Pos)                /**< (MCLK_INTENCLR) Clock Ready Interrupt Enable Mask */
#define MCLK_INTENCLR_CKRDY(value)            (MCLK_INTENCLR_CKRDY_Msk & ((value) << MCLK_INTENCLR_CKRDY_Pos))
#define MCLK_INTENCLR_Msk                     _U_(0x01)                                            /**< (MCLK_INTENCLR) Register Mask  */


/* -------- MCLK_INTENSET : (MCLK Offset: 0x02) (R/W 8) Interrupt Enable Set -------- */
#define MCLK_INTENSET_RESETVALUE              _U_(0x00)                                            /**<  (MCLK_INTENSET) Interrupt Enable Set  Reset Value */

#define MCLK_INTENSET_CKRDY_Pos               _U_(0)                                               /**< (MCLK_INTENSET) Clock Ready Interrupt Enable Position */
#define MCLK_INTENSET_CKRDY_Msk               (_U_(0x1) << MCLK_INTENSET_CKRDY_Pos)                /**< (MCLK_INTENSET) Clock Ready Interrupt Enable Mask */
#define MCLK_INTENSET_CKRDY(value)            (MCLK_INTENSET_CKRDY_Msk & ((value) << MCLK_INTENSET_CKRDY_Pos))
#define MCLK_INTENSET_Msk                     _U_(0x01)                                            /**< (MCLK_INTENSET) Register Mask  */


/* -------- MCLK_INTFLAG : (MCLK Offset: 0x03) (R/W 8) Interrupt Flag Status and Clear -------- */
#define MCLK_INTFLAG_RESETVALUE               _U_(0x01)                                            /**<  (MCLK_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define MCLK_INTFLAG_CKRDY_Pos                _U_(0)                                               /**< (MCLK_INTFLAG) Clock Ready Position */
#define MCLK_INTFLAG_CKRDY_Msk                (_U_(0x1) << MCLK_INTFLAG_CKRDY_Pos)                 /**< (MCLK_INTFLAG) Clock Ready Mask */
#define MCLK_INTFLAG_CKRDY(value)             (MCLK_INTFLAG_CKRDY_Msk & ((value) << MCLK_INTFLAG_CKRDY_Pos))
#define MCLK_INTFLAG_Msk                      _U_(0x01)                                            /**< (MCLK_INTFLAG) Register Mask  */


/* -------- MCLK_CPUDIV : (MCLK Offset: 0x04) (R/W 8) CPU Clock Division -------- */
#define MCLK_CPUDIV_RESETVALUE                _U_(0x01)                                            /**<  (MCLK_CPUDIV) CPU Clock Division  Reset Value */

#define MCLK_CPUDIV_CPUDIV_Pos                _U_(0)                                               /**< (MCLK_CPUDIV) CPU Clock Division Factor Position */
#define MCLK_CPUDIV_CPUDIV_Msk                (_U_(0xFF) << MCLK_CPUDIV_CPUDIV_Pos)                /**< (MCLK_CPUDIV) CPU Clock Division Factor Mask */
#define MCLK_CPUDIV_CPUDIV(value)             (MCLK_CPUDIV_CPUDIV_Msk & ((value) << MCLK_CPUDIV_CPUDIV_Pos))
#define   MCLK_CPUDIV_CPUDIV_DIV1_Val         _U_(0x1)                                             /**< (MCLK_CPUDIV) Divide by 1  */
#define   MCLK_CPUDIV_CPUDIV_DIV2_Val         _U_(0x2)                                             /**< (MCLK_CPUDIV) Divide by 2  */
#define   MCLK_CPUDIV_CPUDIV_DIV4_Val         _U_(0x4)                                             /**< (MCLK_CPUDIV) Divide by 4  */
#define   MCLK_CPUDIV_CPUDIV_DIV8_Val         _U_(0x8)                                             /**< (MCLK_CPUDIV) Divide by 8  */
#define   MCLK_CPUDIV_CPUDIV_DIV16_Val        _U_(0x10)                                            /**< (MCLK_CPUDIV) Divide by 16  */
#define   MCLK_CPUDIV_CPUDIV_DIV32_Val        _U_(0x20)                                            /**< (MCLK_CPUDIV) Divide by 32  */
#define   MCLK_CPUDIV_CPUDIV_DIV64_Val        _U_(0x40)                                            /**< (MCLK_CPUDIV) Divide by 64  */
#define   MCLK_CPUDIV_CPUDIV_DIV128_Val       _U_(0x80)                                            /**< (MCLK_CPUDIV) Divide by 128  */
#define MCLK_CPUDIV_CPUDIV_DIV1               (MCLK_CPUDIV_CPUDIV_DIV1_Val << MCLK_CPUDIV_CPUDIV_Pos) /**< (MCLK_CPUDIV) Divide by 1 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV2               (MCLK_CPUDIV_CPUDIV_DIV2_Val << MCLK_CPUDIV_CPUDIV_Pos) /**< (MCLK_CPUDIV) Divide by 2 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV4               (MCLK_CPUDIV_CPUDIV_DIV4_Val << MCLK_CPUDIV_CPUDIV_Pos) /**< (MCLK_CPUDIV) Divide by 4 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV8               (MCLK_CPUDIV_CPUDIV_DIV8_Val << MCLK_CPUDIV_CPUDIV_Pos) /**< (MCLK_CPUDIV) Divide by 8 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV16              (MCLK_CPUDIV_CPUDIV_DIV16_Val << MCLK_CPUDIV_CPUDIV_Pos) /**< (MCLK_CPUDIV) Divide by 16 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV32              (MCLK_CPUDIV_CPUDIV_DIV32_Val << MCLK_CPUDIV_CPUDIV_Pos) /**< (MCLK_CPUDIV) Divide by 32 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV64              (MCLK_CPUDIV_CPUDIV_DIV64_Val << MCLK_CPUDIV_CPUDIV_Pos) /**< (MCLK_CPUDIV) Divide by 64 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV128             (MCLK_CPUDIV_CPUDIV_DIV128_Val << MCLK_CPUDIV_CPUDIV_Pos) /**< (MCLK_CPUDIV) Divide by 128 Position  */
#define MCLK_CPUDIV_Msk                       _U_(0xFF)                                            /**< (MCLK_CPUDIV) Register Mask  */


/* -------- MCLK_AHBMASK : (MCLK Offset: 0x10) (R/W 32) AHB Mask -------- */
#define MCLK_AHBMASK_RESETVALUE               _U_(0x1FFF)                                          /**<  (MCLK_AHBMASK) AHB Mask  Reset Value */

#define MCLK_AHBMASK_APBA_Pos                 _U_(0)                                               /**< (MCLK_AHBMASK) AHB-APB Bridge A AHB Clock Mask Position */
#define MCLK_AHBMASK_APBA_Msk                 (_U_(0x1) << MCLK_AHBMASK_APBA_Pos)                  /**< (MCLK_AHBMASK) AHB-APB Bridge A AHB Clock Mask Mask */
#define MCLK_AHBMASK_APBA(value)              (MCLK_AHBMASK_APBA_Msk & ((value) << MCLK_AHBMASK_APBA_Pos))
#define MCLK_AHBMASK_APBB_Pos                 _U_(1)                                               /**< (MCLK_AHBMASK) AHB-APB Bridge B AHB Clock Mask Position */
#define MCLK_AHBMASK_APBB_Msk                 (_U_(0x1) << MCLK_AHBMASK_APBB_Pos)                  /**< (MCLK_AHBMASK) AHB-APB Bridge B AHB Clock Mask Mask */
#define MCLK_AHBMASK_APBB(value)              (MCLK_AHBMASK_APBB_Msk & ((value) << MCLK_AHBMASK_APBB_Pos))
#define MCLK_AHBMASK_APBC_Pos                 _U_(2)                                               /**< (MCLK_AHBMASK) AHB-APB Bridge C AHB Clock Mask Position */
#define MCLK_AHBMASK_APBC_Msk                 (_U_(0x1) << MCLK_AHBMASK_APBC_Pos)                  /**< (MCLK_AHBMASK) AHB-APB Bridge C AHB Clock Mask Mask */
#define MCLK_AHBMASK_APBC(value)              (MCLK_AHBMASK_APBC_Msk & ((value) << MCLK_AHBMASK_APBC_Pos))
#define MCLK_AHBMASK_DMAC_Pos                 _U_(3)                                               /**< (MCLK_AHBMASK) DMAC AHB Clock Mask Position */
#define MCLK_AHBMASK_DMAC_Msk                 (_U_(0x1) << MCLK_AHBMASK_DMAC_Pos)                  /**< (MCLK_AHBMASK) DMAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_DMAC(value)              (MCLK_AHBMASK_DMAC_Msk & ((value) << MCLK_AHBMASK_DMAC_Pos))
#define MCLK_AHBMASK_DSU_Pos                  _U_(4)                                               /**< (MCLK_AHBMASK) DSU AHB Clock Mask Position */
#define MCLK_AHBMASK_DSU_Msk                  (_U_(0x1) << MCLK_AHBMASK_DSU_Pos)                   /**< (MCLK_AHBMASK) DSU AHB Clock Mask Mask */
#define MCLK_AHBMASK_DSU(value)               (MCLK_AHBMASK_DSU_Msk & ((value) << MCLK_AHBMASK_DSU_Pos))
#define MCLK_AHBMASK_PAC_Pos                  _U_(6)                                               /**< (MCLK_AHBMASK) PAC AHB Clock Mask Position */
#define MCLK_AHBMASK_PAC_Msk                  (_U_(0x1) << MCLK_AHBMASK_PAC_Pos)                   /**< (MCLK_AHBMASK) PAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_PAC(value)               (MCLK_AHBMASK_PAC_Msk & ((value) << MCLK_AHBMASK_PAC_Pos))
#define MCLK_AHBMASK_NVMCTRL_Pos              _U_(7)                                               /**< (MCLK_AHBMASK) NVMCTRL AHB Clock Mask Position */
#define MCLK_AHBMASK_NVMCTRL_Msk              (_U_(0x1) << MCLK_AHBMASK_NVMCTRL_Pos)               /**< (MCLK_AHBMASK) NVMCTRL AHB Clock Mask Mask */
#define MCLK_AHBMASK_NVMCTRL(value)           (MCLK_AHBMASK_NVMCTRL_Msk & ((value) << MCLK_AHBMASK_NVMCTRL_Pos))
#define MCLK_AHBMASK_TRAM_Pos                 _U_(12)                                              /**< (MCLK_AHBMASK) TRAM AHB Clock Mask Position */
#define MCLK_AHBMASK_TRAM_Msk                 (_U_(0x1) << MCLK_AHBMASK_TRAM_Pos)                  /**< (MCLK_AHBMASK) TRAM AHB Clock Mask Mask */
#define MCLK_AHBMASK_TRAM(value)              (MCLK_AHBMASK_TRAM_Msk & ((value) << MCLK_AHBMASK_TRAM_Pos))
#define MCLK_AHBMASK_Msk                      _U_(0x000010DF)                                      /**< (MCLK_AHBMASK) Register Mask  */


/* -------- MCLK_APBAMASK : (MCLK Offset: 0x14) (R/W 32) APBA Mask -------- */
#define MCLK_APBAMASK_RESETVALUE              _U_(0x7FFF)                                          /**<  (MCLK_APBAMASK) APBA Mask  Reset Value */

#define MCLK_APBAMASK_PAC_Pos                 _U_(0)                                               /**< (MCLK_APBAMASK) PAC APB Clock Enable Position */
#define MCLK_APBAMASK_PAC_Msk                 (_U_(0x1) << MCLK_APBAMASK_PAC_Pos)                  /**< (MCLK_APBAMASK) PAC APB Clock Enable Mask */
#define MCLK_APBAMASK_PAC(value)              (MCLK_APBAMASK_PAC_Msk & ((value) << MCLK_APBAMASK_PAC_Pos))
#define MCLK_APBAMASK_PM_Pos                  _U_(1)                                               /**< (MCLK_APBAMASK) PM APB Clock Enable Position */
#define MCLK_APBAMASK_PM_Msk                  (_U_(0x1) << MCLK_APBAMASK_PM_Pos)                   /**< (MCLK_APBAMASK) PM APB Clock Enable Mask */
#define MCLK_APBAMASK_PM(value)               (MCLK_APBAMASK_PM_Msk & ((value) << MCLK_APBAMASK_PM_Pos))
#define MCLK_APBAMASK_MCLK_Pos                _U_(2)                                               /**< (MCLK_APBAMASK) MCLK APB Clock Enable Position */
#define MCLK_APBAMASK_MCLK_Msk                (_U_(0x1) << MCLK_APBAMASK_MCLK_Pos)                 /**< (MCLK_APBAMASK) MCLK APB Clock Enable Mask */
#define MCLK_APBAMASK_MCLK(value)             (MCLK_APBAMASK_MCLK_Msk & ((value) << MCLK_APBAMASK_MCLK_Pos))
#define MCLK_APBAMASK_RSTC_Pos                _U_(3)                                               /**< (MCLK_APBAMASK) RSTC APB Clock Enable Position */
#define MCLK_APBAMASK_RSTC_Msk                (_U_(0x1) << MCLK_APBAMASK_RSTC_Pos)                 /**< (MCLK_APBAMASK) RSTC APB Clock Enable Mask */
#define MCLK_APBAMASK_RSTC(value)             (MCLK_APBAMASK_RSTC_Msk & ((value) << MCLK_APBAMASK_RSTC_Pos))
#define MCLK_APBAMASK_OSCCTRL_Pos             _U_(4)                                               /**< (MCLK_APBAMASK) OSCCTRL APB Clock Enable Position */
#define MCLK_APBAMASK_OSCCTRL_Msk             (_U_(0x1) << MCLK_APBAMASK_OSCCTRL_Pos)              /**< (MCLK_APBAMASK) OSCCTRL APB Clock Enable Mask */
#define MCLK_APBAMASK_OSCCTRL(value)          (MCLK_APBAMASK_OSCCTRL_Msk & ((value) << MCLK_APBAMASK_OSCCTRL_Pos))
#define MCLK_APBAMASK_OSC32KCTRL_Pos          _U_(5)                                               /**< (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable Position */
#define MCLK_APBAMASK_OSC32KCTRL_Msk          (_U_(0x1) << MCLK_APBAMASK_OSC32KCTRL_Pos)           /**< (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable Mask */
#define MCLK_APBAMASK_OSC32KCTRL(value)       (MCLK_APBAMASK_OSC32KCTRL_Msk & ((value) << MCLK_APBAMASK_OSC32KCTRL_Pos))
#define MCLK_APBAMASK_SUPC_Pos                _U_(6)                                               /**< (MCLK_APBAMASK) SUPC APB Clock Enable Position */
#define MCLK_APBAMASK_SUPC_Msk                (_U_(0x1) << MCLK_APBAMASK_SUPC_Pos)                 /**< (MCLK_APBAMASK) SUPC APB Clock Enable Mask */
#define MCLK_APBAMASK_SUPC(value)             (MCLK_APBAMASK_SUPC_Msk & ((value) << MCLK_APBAMASK_SUPC_Pos))
#define MCLK_APBAMASK_GCLK_Pos                _U_(7)                                               /**< (MCLK_APBAMASK) GCLK APB Clock Enable Position */
#define MCLK_APBAMASK_GCLK_Msk                (_U_(0x1) << MCLK_APBAMASK_GCLK_Pos)                 /**< (MCLK_APBAMASK) GCLK APB Clock Enable Mask */
#define MCLK_APBAMASK_GCLK(value)             (MCLK_APBAMASK_GCLK_Msk & ((value) << MCLK_APBAMASK_GCLK_Pos))
#define MCLK_APBAMASK_WDT_Pos                 _U_(8)                                               /**< (MCLK_APBAMASK) WDT APB Clock Enable Position */
#define MCLK_APBAMASK_WDT_Msk                 (_U_(0x1) << MCLK_APBAMASK_WDT_Pos)                  /**< (MCLK_APBAMASK) WDT APB Clock Enable Mask */
#define MCLK_APBAMASK_WDT(value)              (MCLK_APBAMASK_WDT_Msk & ((value) << MCLK_APBAMASK_WDT_Pos))
#define MCLK_APBAMASK_RTC_Pos                 _U_(9)                                               /**< (MCLK_APBAMASK) RTC APB Clock Enable Position */
#define MCLK_APBAMASK_RTC_Msk                 (_U_(0x1) << MCLK_APBAMASK_RTC_Pos)                  /**< (MCLK_APBAMASK) RTC APB Clock Enable Mask */
#define MCLK_APBAMASK_RTC(value)              (MCLK_APBAMASK_RTC_Msk & ((value) << MCLK_APBAMASK_RTC_Pos))
#define MCLK_APBAMASK_EIC_Pos                 _U_(10)                                              /**< (MCLK_APBAMASK) EIC APB Clock Enable Position */
#define MCLK_APBAMASK_EIC_Msk                 (_U_(0x1) << MCLK_APBAMASK_EIC_Pos)                  /**< (MCLK_APBAMASK) EIC APB Clock Enable Mask */
#define MCLK_APBAMASK_EIC(value)              (MCLK_APBAMASK_EIC_Msk & ((value) << MCLK_APBAMASK_EIC_Pos))
#define MCLK_APBAMASK_FREQM_Pos               _U_(11)                                              /**< (MCLK_APBAMASK) FREQM APB Clock Enable Position */
#define MCLK_APBAMASK_FREQM_Msk               (_U_(0x1) << MCLK_APBAMASK_FREQM_Pos)                /**< (MCLK_APBAMASK) FREQM APB Clock Enable Mask */
#define MCLK_APBAMASK_FREQM(value)            (MCLK_APBAMASK_FREQM_Msk & ((value) << MCLK_APBAMASK_FREQM_Pos))
#define MCLK_APBAMASK_PORT_Pos                _U_(12)                                              /**< (MCLK_APBAMASK) PORT APB Clock Enable Position */
#define MCLK_APBAMASK_PORT_Msk                (_U_(0x1) << MCLK_APBAMASK_PORT_Pos)                 /**< (MCLK_APBAMASK) PORT APB Clock Enable Mask */
#define MCLK_APBAMASK_PORT(value)             (MCLK_APBAMASK_PORT_Msk & ((value) << MCLK_APBAMASK_PORT_Pos))
#define MCLK_APBAMASK_AC_Pos                  _U_(13)                                              /**< (MCLK_APBAMASK) AC APB Clock Enable Position */
#define MCLK_APBAMASK_AC_Msk                  (_U_(0x1) << MCLK_APBAMASK_AC_Pos)                   /**< (MCLK_APBAMASK) AC APB Clock Enable Mask */
#define MCLK_APBAMASK_AC(value)               (MCLK_APBAMASK_AC_Msk & ((value) << MCLK_APBAMASK_AC_Pos))
#define MCLK_APBAMASK_Msk                     _U_(0x00003FFF)                                      /**< (MCLK_APBAMASK) Register Mask  */


/* -------- MCLK_APBBMASK : (MCLK Offset: 0x18) (R/W 32) APBB Mask -------- */
#define MCLK_APBBMASK_RESETVALUE              _U_(0x17)                                            /**<  (MCLK_APBBMASK) APBB Mask  Reset Value */

#define MCLK_APBBMASK_IDAU_Pos                _U_(0)                                               /**< (MCLK_APBBMASK) IDAU APB Clock Enable Position */
#define MCLK_APBBMASK_IDAU_Msk                (_U_(0x1) << MCLK_APBBMASK_IDAU_Pos)                 /**< (MCLK_APBBMASK) IDAU APB Clock Enable Mask */
#define MCLK_APBBMASK_IDAU(value)             (MCLK_APBBMASK_IDAU_Msk & ((value) << MCLK_APBBMASK_IDAU_Pos))
#define MCLK_APBBMASK_DSU_Pos                 _U_(1)                                               /**< (MCLK_APBBMASK) DSU APB Clock Enable Position */
#define MCLK_APBBMASK_DSU_Msk                 (_U_(0x1) << MCLK_APBBMASK_DSU_Pos)                  /**< (MCLK_APBBMASK) DSU APB Clock Enable Mask */
#define MCLK_APBBMASK_DSU(value)              (MCLK_APBBMASK_DSU_Msk & ((value) << MCLK_APBBMASK_DSU_Pos))
#define MCLK_APBBMASK_NVMCTRL_Pos             _U_(2)                                               /**< (MCLK_APBBMASK) NVMCTRL APB Clock Enable Position */
#define MCLK_APBBMASK_NVMCTRL_Msk             (_U_(0x1) << MCLK_APBBMASK_NVMCTRL_Pos)              /**< (MCLK_APBBMASK) NVMCTRL APB Clock Enable Mask */
#define MCLK_APBBMASK_NVMCTRL(value)          (MCLK_APBBMASK_NVMCTRL_Msk & ((value) << MCLK_APBBMASK_NVMCTRL_Pos))
#define MCLK_APBBMASK_HMATRIXS_Pos            _U_(4)                                               /**< (MCLK_APBBMASK) HMATRIXHS APBB Clock Enable Position */
#define MCLK_APBBMASK_HMATRIXS_Msk            (_U_(0x1) << MCLK_APBBMASK_HMATRIXS_Pos)             /**< (MCLK_APBBMASK) HMATRIXHS APBB Clock Enable Mask */
#define MCLK_APBBMASK_HMATRIXS(value)         (MCLK_APBBMASK_HMATRIXS_Msk & ((value) << MCLK_APBBMASK_HMATRIXS_Pos))
#define MCLK_APBBMASK_Msk                     _U_(0x00000017)                                      /**< (MCLK_APBBMASK) Register Mask  */


/* -------- MCLK_APBCMASK : (MCLK Offset: 0x1C) (R/W 32) APBC Mask -------- */
#define MCLK_APBCMASK_RESETVALUE              _U_(0x1FFF)                                          /**<  (MCLK_APBCMASK) APBC Mask  Reset Value */

#define MCLK_APBCMASK_EVSYS_Pos               _U_(0)                                               /**< (MCLK_APBCMASK) EVSYS APB Clock Enable Position */
#define MCLK_APBCMASK_EVSYS_Msk               (_U_(0x1) << MCLK_APBCMASK_EVSYS_Pos)                /**< (MCLK_APBCMASK) EVSYS APB Clock Enable Mask */
#define MCLK_APBCMASK_EVSYS(value)            (MCLK_APBCMASK_EVSYS_Msk & ((value) << MCLK_APBCMASK_EVSYS_Pos))
#define MCLK_APBCMASK_SERCOM0_Pos             _U_(1)                                               /**< (MCLK_APBCMASK) SERCOM0 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM0_Msk             (_U_(0x1) << MCLK_APBCMASK_SERCOM0_Pos)              /**< (MCLK_APBCMASK) SERCOM0 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM0(value)          (MCLK_APBCMASK_SERCOM0_Msk & ((value) << MCLK_APBCMASK_SERCOM0_Pos))
#define MCLK_APBCMASK_SERCOM1_Pos             _U_(2)                                               /**< (MCLK_APBCMASK) SERCOM1 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM1_Msk             (_U_(0x1) << MCLK_APBCMASK_SERCOM1_Pos)              /**< (MCLK_APBCMASK) SERCOM1 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM1(value)          (MCLK_APBCMASK_SERCOM1_Msk & ((value) << MCLK_APBCMASK_SERCOM1_Pos))
#define MCLK_APBCMASK_SERCOM2_Pos             _U_(3)                                               /**< (MCLK_APBCMASK) SERCOM2 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM2_Msk             (_U_(0x1) << MCLK_APBCMASK_SERCOM2_Pos)              /**< (MCLK_APBCMASK) SERCOM2 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM2(value)          (MCLK_APBCMASK_SERCOM2_Msk & ((value) << MCLK_APBCMASK_SERCOM2_Pos))
#define MCLK_APBCMASK_TC0_Pos                 _U_(4)                                               /**< (MCLK_APBCMASK) TC0 APB Clock Enable Position */
#define MCLK_APBCMASK_TC0_Msk                 (_U_(0x1) << MCLK_APBCMASK_TC0_Pos)                  /**< (MCLK_APBCMASK) TC0 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC0(value)              (MCLK_APBCMASK_TC0_Msk & ((value) << MCLK_APBCMASK_TC0_Pos))
#define MCLK_APBCMASK_TC1_Pos                 _U_(5)                                               /**< (MCLK_APBCMASK) TC1 APB Clock Enable Position */
#define MCLK_APBCMASK_TC1_Msk                 (_U_(0x1) << MCLK_APBCMASK_TC1_Pos)                  /**< (MCLK_APBCMASK) TC1 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC1(value)              (MCLK_APBCMASK_TC1_Msk & ((value) << MCLK_APBCMASK_TC1_Pos))
#define MCLK_APBCMASK_TC2_Pos                 _U_(6)                                               /**< (MCLK_APBCMASK) TC2 APB Clock Enable Position */
#define MCLK_APBCMASK_TC2_Msk                 (_U_(0x1) << MCLK_APBCMASK_TC2_Pos)                  /**< (MCLK_APBCMASK) TC2 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC2(value)              (MCLK_APBCMASK_TC2_Msk & ((value) << MCLK_APBCMASK_TC2_Pos))
#define MCLK_APBCMASK_ADC_Pos                 _U_(7)                                               /**< (MCLK_APBCMASK) ADC APB Clock Enable Position */
#define MCLK_APBCMASK_ADC_Msk                 (_U_(0x1) << MCLK_APBCMASK_ADC_Pos)                  /**< (MCLK_APBCMASK) ADC APB Clock Enable Mask */
#define MCLK_APBCMASK_ADC(value)              (MCLK_APBCMASK_ADC_Msk & ((value) << MCLK_APBCMASK_ADC_Pos))
#define MCLK_APBCMASK_DAC_Pos                 _U_(8)                                               /**< (MCLK_APBCMASK) DAC APB Clock Enable Position */
#define MCLK_APBCMASK_DAC_Msk                 (_U_(0x1) << MCLK_APBCMASK_DAC_Pos)                  /**< (MCLK_APBCMASK) DAC APB Clock Enable Mask */
#define MCLK_APBCMASK_DAC(value)              (MCLK_APBCMASK_DAC_Msk & ((value) << MCLK_APBCMASK_DAC_Pos))
#define MCLK_APBCMASK_PTC_Pos                 _U_(9)                                               /**< (MCLK_APBCMASK) PTC APB Clock Enable Position */
#define MCLK_APBCMASK_PTC_Msk                 (_U_(0x1) << MCLK_APBCMASK_PTC_Pos)                  /**< (MCLK_APBCMASK) PTC APB Clock Enable Mask */
#define MCLK_APBCMASK_PTC(value)              (MCLK_APBCMASK_PTC_Msk & ((value) << MCLK_APBCMASK_PTC_Pos))
#define MCLK_APBCMASK_TRNG_Pos                _U_(10)                                              /**< (MCLK_APBCMASK) TRNG APB Clock Enable Position */
#define MCLK_APBCMASK_TRNG_Msk                (_U_(0x1) << MCLK_APBCMASK_TRNG_Pos)                 /**< (MCLK_APBCMASK) TRNG APB Clock Enable Mask */
#define MCLK_APBCMASK_TRNG(value)             (MCLK_APBCMASK_TRNG_Msk & ((value) << MCLK_APBCMASK_TRNG_Pos))
#define MCLK_APBCMASK_CCL_Pos                 _U_(11)                                              /**< (MCLK_APBCMASK) CCL APB Clock Enable Position */
#define MCLK_APBCMASK_CCL_Msk                 (_U_(0x1) << MCLK_APBCMASK_CCL_Pos)                  /**< (MCLK_APBCMASK) CCL APB Clock Enable Mask */
#define MCLK_APBCMASK_CCL(value)              (MCLK_APBCMASK_CCL_Msk & ((value) << MCLK_APBCMASK_CCL_Pos))
#define MCLK_APBCMASK_OPAMP_Pos               _U_(12)                                              /**< (MCLK_APBCMASK) OPAMP APB Clock Enable Position */
#define MCLK_APBCMASK_OPAMP_Msk               (_U_(0x1) << MCLK_APBCMASK_OPAMP_Pos)                /**< (MCLK_APBCMASK) OPAMP APB Clock Enable Mask */
#define MCLK_APBCMASK_OPAMP(value)            (MCLK_APBCMASK_OPAMP_Msk & ((value) << MCLK_APBCMASK_OPAMP_Pos))
#define MCLK_APBCMASK_Msk                     _U_(0x00001FFF)                                      /**< (MCLK_APBCMASK) Register Mask  */

#define MCLK_APBCMASK_SERCOM_Pos              _U_(1)                                               /**< (MCLK_APBCMASK Position) SERCOMx APB Clock Enable */
#define MCLK_APBCMASK_SERCOM_Msk              (_U_(0x7) << MCLK_APBCMASK_SERCOM_Pos)               /**< (MCLK_APBCMASK Mask) SERCOM */
#define MCLK_APBCMASK_SERCOM(value)           (MCLK_APBCMASK_SERCOM_Msk & ((value) << MCLK_APBCMASK_SERCOM_Pos)) 
#define MCLK_APBCMASK_TC_Pos                  _U_(4)                                               /**< (MCLK_APBCMASK Position) TCx APB Clock Enable */
#define MCLK_APBCMASK_TC_Msk                  (_U_(0x7) << MCLK_APBCMASK_TC_Pos)                   /**< (MCLK_APBCMASK Mask) TC */
#define MCLK_APBCMASK_TC(value)               (MCLK_APBCMASK_TC_Msk & ((value) << MCLK_APBCMASK_TC_Pos)) 

/** \brief MCLK register offsets definitions */
#define MCLK_CTRLA_REG_OFST            (0x00)              /**< (MCLK_CTRLA) Control Offset */
#define MCLK_INTENCLR_REG_OFST         (0x01)              /**< (MCLK_INTENCLR) Interrupt Enable Clear Offset */
#define MCLK_INTENSET_REG_OFST         (0x02)              /**< (MCLK_INTENSET) Interrupt Enable Set Offset */
#define MCLK_INTFLAG_REG_OFST          (0x03)              /**< (MCLK_INTFLAG) Interrupt Flag Status and Clear Offset */
#define MCLK_CPUDIV_REG_OFST           (0x04)              /**< (MCLK_CPUDIV) CPU Clock Division Offset */
#define MCLK_AHBMASK_REG_OFST          (0x10)              /**< (MCLK_AHBMASK) AHB Mask Offset */
#define MCLK_APBAMASK_REG_OFST         (0x14)              /**< (MCLK_APBAMASK) APBA Mask Offset */
#define MCLK_APBBMASK_REG_OFST         (0x18)              /**< (MCLK_APBBMASK) APBB Mask Offset */
#define MCLK_APBCMASK_REG_OFST         (0x1C)              /**< (MCLK_APBCMASK) APBC Mask Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MCLK register API structure */
typedef struct
{  /* Main Clock */
  __IO  uint8_t                        MCLK_CTRLA;         /**< Offset: 0x00 (R/W  8) Control */
  __IO  uint8_t                        MCLK_INTENCLR;      /**< Offset: 0x01 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        MCLK_INTENSET;      /**< Offset: 0x02 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        MCLK_INTFLAG;       /**< Offset: 0x03 (R/W  8) Interrupt Flag Status and Clear */
  __IO  uint8_t                        MCLK_CPUDIV;        /**< Offset: 0x04 (R/W  8) CPU Clock Division */
  __I   uint8_t                        Reserved1[0x0B];
  __IO  uint32_t                       MCLK_AHBMASK;       /**< Offset: 0x10 (R/W  32) AHB Mask */
  __IO  uint32_t                       MCLK_APBAMASK;      /**< Offset: 0x14 (R/W  32) APBA Mask */
  __IO  uint32_t                       MCLK_APBBMASK;      /**< Offset: 0x18 (R/W  32) APBB Mask */
  __IO  uint32_t                       MCLK_APBCMASK;      /**< Offset: 0x1C (R/W  32) APBC Mask */
} mclk_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML11_MCLK_COMPONENT_H_ */
