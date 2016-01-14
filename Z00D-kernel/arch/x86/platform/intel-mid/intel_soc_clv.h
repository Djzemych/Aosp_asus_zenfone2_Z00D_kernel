/*
 * intel_soc_clv.h
 * Copyright (c) 2012, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifdef CONFIG_REMOVEME_INTEL_ATOM_CLV_POWER

#define   PM_SUPPORT				0x21

#define ISP_POS			7
#define ISP_SUB_CLASS		0x80
#define PMU_MISC_SET_TIMEOUT	15000

#define PMU1_MAX_DEVS   8
#define PMU2_MAX_DEVS   55

#define GFX_LSS_INDEX			1
#define PMU_SDIO0_LSS_00		0
#define PMU_EMMC0_LSS_01		1
#define PMU_AONT_LSS_02			2
#define PMU_HSI_LSS_03			3
#define PMU_SECURITY_LSS_04		4
#define PMU_EMMC1_LSS_05		5
#define PMU_USB_OTG_LSS_06		6
#define PMU_USB_HSIC_LSS_07		7
#define PMU_AUDIO_ENGINE_LSS_08		8
#define PMU_AUDIO_DMA_LSS_09		9
#define PMU_SRAM_LSS_10			10
#define PMU_SRAM_LSS_11			11
#define PMU_SRAM_LSS_12			12
#define PMU_SRAM_LSS_13			13
#define PMU_SDIO2_LSS_14		14
#define PMU_PTI_DAFCA_LSS_15		15
#define PMU_SC_DMA_LSS_16		16
#define PMU_SPIO_LSS_17			17
#define PMU_SPI1_LSS_18			18
#define PMU_SPI2_LSS_19			19
#define PMU_I2C0_LSS_20			20
#define PMU_I2C1_LSS_21			21
#define PMU_HPET_LSS_22			22
#define PMU_EXTTMR_LSS_23		23
#define PMU_SC_FABRIC_LSS_24		24
#define PMU_AUDIO_RAM_LSS_25		25
#define PMU_SCU_ROM_LSS_26		26
#define PMU_I2C2_LSS_27			27
#define PMU_SSC_LSS_28			28
#define PMU_SECURITY_LSS_29		29
#define PMU_SDIO1_LSS_30		30
#define PMU_vRTC_LSS_31			31
#define PMU_SEC_TIMER_LSS_32		32
#define PMU_I2C3_LSS_33			33
#define PMU_I2C4_LSS_34			34
#define PMU_I2C5_LSS_35			35
#define PMU_SPI3_LSS_36			36
#define PMU_GPIO1_LSS_37		37
#define PMU_PWR_BUTTON_LSS_38		38
#define PMU_GPIO0_LSS_39		39
#define PMU_KEYBRD_LSS_40		40
#define PMU_UART2_LSS_41		41
#define PMU_ADC_LSS_42			42
#define PMU_CHARGER_LSS_43		43
#define PMU_SEC_TAPC_LSS_44		44
#define PMU_RTC_LSS_45			45
#define PMU_GPI_LSS_46			46
#define PMU_BCU_LSS_47			47
#define PMU_SSP2_LSS_48			48
#define PMU_AUDIO_SLIM1_LSS_49		49
#define PMU_AUDIO_SLIM2_LSS_50		50
#define PMU_AUDIO_SSP0_LSS_51		51
#define PMU_AUDIO_SSP1_LSS_52		52
#define PMU_IOSF_OCP_BRG_LSS_53		53
#define PMU_GP_DMA_LSS_54		54
#define PMU_MSIC_RESET_LSS_55		55
#define PMU_SOC_FUSE_LSS_56		56
#define PMU_RSVD3_LSS_57		57
#define PMU_SSP4_LSS_58			58
#define PMU_RSVD5_LSS_59		59
#define PMU_RSVD6_LSS_60		60
#define PMU_RSVD7_LSS_61		61
#define PMU_RSVD8_LSS_62		62
#define PMU_RSVD9_LSS_63		63

#define PMU_MAX_LSS			63
#define PMU_LSS_IN_FIRST_DWORD		32

#define EMMC0_LSS			PMU_EMMC0_LSS_01

#define S0IX_TARGET_SSS0_MASK ( \
	SSMSK(D0I3_MASK, PMU_SDIO0_LSS_00) | \
	SSMSK(D0I3_MASK, PMU_EMMC0_LSS_01) | \
	SSMSK(D0I3_MASK, PMU_HSI_LSS_03) | \
	SSMSK(D0I3_MASK, PMU_SECURITY_LSS_04) | \
	SSMSK(D0I3_MASK, PMU_EMMC1_LSS_05) | \
	SSMSK(D0I3_MASK, PMU_USB_OTG_LSS_06) | \
	SSMSK(D0I3_MASK, PMU_USB_HSIC_LSS_07) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_ENGINE_LSS_08) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_DMA_LSS_09) | \
	SSMSK(D0I3_MASK, PMU_SDIO2_LSS_14))

#define S0IX_TARGET_SSS1_MASK ( \
	SSMSK(D0I3_MASK, PMU_SPI1_LSS_18-16) | \
	SSMSK(D0I3_MASK, PMU_I2C0_LSS_20-16) | \
	SSMSK(D0I3_MASK, PMU_I2C1_LSS_21-16) | \
	SSMSK(D0I3_MASK, PMU_I2C2_LSS_27-16) | \
	SSMSK(D0I3_MASK, PMU_SDIO1_LSS_30-16))
#define S0IX_TARGET_SSS2_MASK ( \
	SSMSK(D0I3_MASK, PMU_I2C3_LSS_33-32) | \
	SSMSK(D0I3_MASK, PMU_I2C4_LSS_34-32) | \
	SSMSK(D0I3_MASK, PMU_I2C5_LSS_35-32) | \
	SSMSK(D0I3_MASK, PMU_SPI3_LSS_36-32) | \
	SSMSK(D0I3_MASK, PMU_UART2_LSS_41-32))

#define S0IX_TARGET_SSS3_MASK ( \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP0_LSS_51-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP1_LSS_52-48))

#define S0IX_TARGET_SSS0 ( \
	SSMSK(D0I3_MASK, PMU_SDIO0_LSS_00) | \
	SSMSK(D0I3_MASK, PMU_EMMC0_LSS_01) | \
	SSMSK(D0I3_MASK, PMU_HSI_LSS_03) | \
	SSMSK(D0I2_MASK, PMU_SECURITY_LSS_04) | \
	SSMSK(D0I3_MASK, PMU_EMMC1_LSS_05) | \
	SSMSK(D0I1_MASK, PMU_USB_OTG_LSS_06) | \
	SSMSK(D0I1_MASK, PMU_USB_HSIC_LSS_07) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_ENGINE_LSS_08) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_DMA_LSS_09) | \
	SSMSK(D0I3_MASK, PMU_SDIO2_LSS_14))

#define S0IX_TARGET_SSS1 ( \
	SSMSK(D0I3_MASK, PMU_SPI1_LSS_18-16) | \
	SSMSK(D0I3_MASK, PMU_I2C0_LSS_20-16) | \
	SSMSK(D0I3_MASK, PMU_I2C1_LSS_21-16) | \
	SSMSK(D0I3_MASK, PMU_I2C2_LSS_27-16) | \
	SSMSK(D0I3_MASK, PMU_SDIO1_LSS_30-16))

#define S0IX_TARGET_SSS2 ( \
	SSMSK(D0I3_MASK, PMU_I2C3_LSS_33-32) | \
	SSMSK(D0I3_MASK, PMU_I2C4_LSS_34-32) | \
	SSMSK(D0I3_MASK, PMU_I2C5_LSS_35-32) | \
	SSMSK(D0I3_MASK, PMU_SPI3_LSS_36-32) | \
	SSMSK(D0I1_MASK, PMU_UART2_LSS_41-32))

#define S0IX_TARGET_SSS3 ( \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP0_LSS_51-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP1_LSS_52-48))

#define LPMP3_TARGET_SSS0_MASK ( \
	SSMSK(D0I3_MASK, PMU_SDIO0_LSS_00) | \
	SSMSK(D0I3_MASK, PMU_EMMC0_LSS_01) | \
	SSMSK(D0I3_MASK, PMU_HSI_LSS_03) | \
	SSMSK(D0I3_MASK, PMU_SECURITY_LSS_04) | \
	SSMSK(D0I3_MASK, PMU_EMMC1_LSS_05) | \
	SSMSK(D0I3_MASK, PMU_USB_OTG_LSS_06) | \
	SSMSK(D0I3_MASK, PMU_USB_HSIC_LSS_07) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_ENGINE_LSS_08) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_DMA_LSS_09) | \
	SSMSK(D0I3_MASK, PMU_SDIO2_LSS_14))

#define LPMP3_TARGET_SSS1_MASK ( \
	SSMSK(D0I3_MASK, PMU_SPI1_LSS_18-16) | \
	SSMSK(D0I3_MASK, PMU_I2C0_LSS_20-16) | \
	SSMSK(D0I3_MASK, PMU_I2C1_LSS_21-16) | \
	SSMSK(D0I3_MASK, PMU_I2C2_LSS_27-16) | \
	SSMSK(D0I3_MASK, PMU_SDIO1_LSS_30-16))

#define LPMP3_TARGET_SSS2_MASK ( \
	SSMSK(D0I3_MASK, PMU_I2C3_LSS_33-32) | \
	SSMSK(D0I3_MASK, PMU_I2C4_LSS_34-32) | \
	SSMSK(D0I3_MASK, PMU_I2C5_LSS_35-32) | \
	SSMSK(D0I3_MASK, PMU_SPI3_LSS_36-32) | \
	SSMSK(D0I3_MASK, PMU_UART2_LSS_41-32))

#define LPMP3_TARGET_SSS3_MASK ( \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP0_LSS_51-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP1_LSS_52-48))

#define LPMP3_TARGET_SSS0 ( \
	SSMSK(D0I3_MASK, PMU_SDIO0_LSS_00) | \
	SSMSK(D0I3_MASK, PMU_EMMC0_LSS_01) | \
	SSMSK(D0I3_MASK, PMU_HSI_LSS_03) | \
	SSMSK(D0I2_MASK, PMU_SECURITY_LSS_04) | \
	SSMSK(D0I3_MASK, PMU_EMMC1_LSS_05) | \
	SSMSK(D0I1_MASK, PMU_USB_OTG_LSS_06) | \
	SSMSK(D0I1_MASK, PMU_USB_HSIC_LSS_07) | \
	SSMSK(D0I0_MASK, PMU_AUDIO_ENGINE_LSS_08) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_DMA_LSS_09) | \
	SSMSK(D0I3_MASK, PMU_SDIO2_LSS_14))

#define LPMP3_TARGET_SSS1 ( \
	SSMSK(D0I3_MASK, PMU_SPI1_LSS_18-16) | \
	SSMSK(D0I3_MASK, PMU_I2C0_LSS_20-16) | \
	SSMSK(D0I3_MASK, PMU_I2C1_LSS_21-16) | \
	SSMSK(D0I3_MASK, PMU_I2C2_LSS_27-16) | \
	SSMSK(D0I3_MASK, PMU_SDIO1_LSS_30-16))

#define LPMP3_TARGET_SSS2 ( \
	SSMSK(D0I3_MASK, PMU_I2C3_LSS_33-32) | \
	SSMSK(D0I3_MASK, PMU_I2C4_LSS_34-32) | \
	SSMSK(D0I3_MASK, PMU_I2C5_LSS_35-32) | \
	SSMSK(D0I3_MASK, PMU_SPI3_LSS_36-32) | \
	SSMSK(D0I1_MASK, PMU_UART2_LSS_41-32))

#define LPMP3_TARGET_SSS3 ( \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP0_LSS_51-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP1_LSS_52-48))

#define IGNORE_SSS0 ( \
	SSMSK(D0I3_MASK, PMU_SRAM_LSS_10) | \
	SSMSK(D0I3_MASK, PMU_SRAM_LSS_11) | \
	SSMSK(D0I3_MASK, PMU_SRAM_LSS_12) | \
	SSMSK(D0I3_MASK, PMU_SRAM_LSS_13) | \
	SSMSK(D0I3_MASK, PMU_PTI_DAFCA_LSS_15))

#define IGNORE_SSS1 ( \
	SSMSK(D0I3_MASK, PMU_SC_DMA_LSS_16-16) | \
	SSMSK(D0I3_MASK, PMU_SPIO_LSS_17-16) | \
	SSMSK(D0I3_MASK, PMU_HPET_LSS_22-16) | \
	SSMSK(D0I3_MASK, PMU_EXTTMR_LSS_23-16) | \
	SSMSK(D0I3_MASK, PMU_SC_FABRIC_LSS_24-16) | \
	SSMSK(D0I3_MASK, PMU_SCU_ROM_LSS_26-16) | \
	SSMSK(D0I3_MASK, PMU_SSC_LSS_28-16) | \
	SSMSK(D0I3_MASK, PMU_SECURITY_LSS_29-16) | \
	SSMSK(D0I3_MASK, PMU_vRTC_LSS_31-16))

#define IGNORE_SSS2 ( \
	SSMSK(D0I3_MASK, PMU_SEC_TIMER_LSS_32-32) | \
	SSMSK(D0I3_MASK, PMU_GPIO1_LSS_37-32) | \
	SSMSK(D0I3_MASK, PMU_PWR_BUTTON_LSS_38-32) | \
	SSMSK(D0I3_MASK, PMU_GPIO0_LSS_39-32) | \
	SSMSK(D0I3_MASK, PMU_ADC_LSS_42-32) | \
	SSMSK(D0I3_MASK, PMU_CHARGER_LSS_43-32) | \
	SSMSK(D0I3_MASK, PMU_SEC_TAPC_LSS_44-32) | \
	SSMSK(D0I3_MASK, PMU_RTC_LSS_45-32) | \
	SSMSK(D0I3_MASK, PMU_GPI_LSS_46-32) | \
	SSMSK(D0I3_MASK, PMU_BCU_LSS_47-32))

#if defined(CONFIG_ME372CL) || defined(CONFIG_PF450CL) || defined(CONFIG_ZE500CL)
#define IGNORE_SSS3 ( \
	SSMSK(D0I3_MASK, PMU_AUDIO_SLIM1_LSS_49-48) | \
	SSMSK(D0I3_MASK, PMU_IOSF_OCP_BRG_LSS_53-48) | \
	SSMSK(D0I3_MASK, PMU_MSIC_RESET_LSS_55-48) | \
	SSMSK(D0I3_MASK, PMU_SOC_FUSE_LSS_56-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD3_LSS_57-48) | \
	SSMSK(D0I3_MASK, PMU_SSP4_LSS_58-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD5_LSS_59-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD6_LSS_60-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD7_LSS_61-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD8_LSS_62-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD9_LSS_63-48))
#else /* CONFIG_ME372CL || CONFIG_PF450CL */
#define IGNORE_SSS3 ( \
	SSMSK(D0I3_MASK, PMU_IOSF_OCP_BRG_LSS_53-48) | \
	SSMSK(D0I3_MASK, PMU_MSIC_RESET_LSS_55-48) | \
	SSMSK(D0I3_MASK, PMU_SOC_FUSE_LSS_56-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD3_LSS_57-48) | \
	SSMSK(D0I3_MASK, PMU_SSP4_LSS_58-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD5_LSS_59-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD6_LSS_60-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD7_LSS_61-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD8_LSS_62-48) | \
	SSMSK(D0I3_MASK, PMU_RSVD9_LSS_63-48))
#endif /* CONFIG_ME372CL || CONFIG_PF450CL */

#define IGNORE_S3_WKC0 SSWKC(PMU_AONT_LSS_02)
#define IGNORE_S3_WKC1 SSWKC(PMU_ADC_LSS_42-32)

/* FIXME:: CVT Platform gives SRAM Error if SRAM is put in D0i3 */
#define S0I3_SSS0 ( \
	SSMSK(D0I3_MASK, PMU_SDIO0_LSS_00) | \
	SSMSK(D0I3_MASK, PMU_EMMC0_LSS_01) | \
	SSMSK(D0I3_MASK, PMU_AONT_LSS_02) | \
	SSMSK(D0I3_MASK, PMU_HSI_LSS_03) | \
	SSMSK(D0I2_MASK, PMU_SECURITY_LSS_04) | \
	SSMSK(D0I3_MASK, PMU_EMMC1_LSS_05) | \
	SSMSK(D0I1_MASK, PMU_USB_OTG_LSS_06) | \
	SSMSK(D0I1_MASK, PMU_USB_HSIC_LSS_07) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_ENGINE_LSS_08) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_DMA_LSS_09) | \
	SSMSK(D0I3_MASK, PMU_SDIO2_LSS_14))

#define S0I3_SSS1 ( \
	SSMSK(D0I3_MASK, PMU_SPI1_LSS_18-16) | \
	SSMSK(D0I3_MASK, PMU_SPI2_LSS_19-16) | \
	SSMSK(D0I3_MASK, PMU_I2C0_LSS_20-16) | \
	SSMSK(D0I3_MASK, PMU_I2C1_LSS_21-16) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_RAM_LSS_25-16) | \
	SSMSK(D0I3_MASK, PMU_I2C2_LSS_27-16) | \
	SSMSK(D0I3_MASK, PMU_SDIO1_LSS_30-16))

#define S0I3_SSS2 ( \
	SSMSK(D0I3_MASK, PMU_I2C3_LSS_33-32) | \
	SSMSK(D0I3_MASK, PMU_I2C4_LSS_34-32) | \
	SSMSK(D0I3_MASK, PMU_I2C5_LSS_35-32) | \
	SSMSK(D0I3_MASK, PMU_SPI3_LSS_36-32) | \
	SSMSK(D0I3_MASK, PMU_GPIO1_LSS_37-32) | \
	SSMSK(D0I3_MASK, PMU_PWR_BUTTON_LSS_38-32) | \
	SSMSK(D0I3_MASK, PMU_KEYBRD_LSS_40-32) | \
	SSMSK(D0I1_MASK, PMU_UART2_LSS_41-32))

#define S0I3_SSS3 ( \
	SSMSK(D0I3_MASK, PMU_AUDIO_SLIM1_LSS_49-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SLIM2_LSS_50-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP0_LSS_51-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP1_LSS_52-48) | \
	SSMSK(D0I3_MASK, PMU_GP_DMA_LSS_54-48))

#define S0I1_SSS0 S0I3_SSS0
#define S0I1_SSS1 S0I3_SSS1
#define S0I1_SSS2 S0I3_SSS2
#define S0I1_SSS3 S0I3_SSS3

#define LPMP3_SSS0 ( \
	SSMSK(D0I3_MASK, PMU_SDIO0_LSS_00) | \
	SSMSK(D0I3_MASK, PMU_EMMC0_LSS_01) | \
	SSMSK(D0I3_MASK, PMU_AONT_LSS_02) | \
	SSMSK(D0I3_MASK, PMU_HSI_LSS_03) | \
	SSMSK(D0I2_MASK, PMU_SECURITY_LSS_04) | \
	SSMSK(D0I3_MASK, PMU_EMMC1_LSS_05) | \
	SSMSK(D0I1_MASK, PMU_USB_OTG_LSS_06) | \
	SSMSK(D0I1_MASK, PMU_USB_HSIC_LSS_07) | \
	SSMSK(D0I3_MASK, PMU_SDIO2_LSS_14))

#define LPMP3_SSS1 ( \
	SSMSK(D0I3_MASK, PMU_SPI1_LSS_18-16) | \
	SSMSK(D0I3_MASK, PMU_SPI2_LSS_19-16) | \
	SSMSK(D0I3_MASK, PMU_I2C0_LSS_20-16) | \
	SSMSK(D0I3_MASK, PMU_I2C1_LSS_21-16) | \
	SSMSK(D0I3_MASK, PMU_I2C2_LSS_27-16) | \
	SSMSK(D0I3_MASK, PMU_SDIO1_LSS_30-16))

#define LPMP3_SSS2 ( \
	SSMSK(D0I3_MASK, PMU_I2C3_LSS_33-32) | \
	SSMSK(D0I3_MASK, PMU_I2C4_LSS_34-32) | \
	SSMSK(D0I3_MASK, PMU_I2C5_LSS_35-32) | \
	SSMSK(D0I3_MASK, PMU_SPI3_LSS_36-32) | \
	SSMSK(D0I3_MASK, PMU_GPIO1_LSS_37-32) | \
	SSMSK(D0I3_MASK, PMU_PWR_BUTTON_LSS_38-32) | \
	SSMSK(D0I3_MASK, PMU_KEYBRD_LSS_40-32) | \
	SSMSK(D0I1_MASK, PMU_UART2_LSS_41-32))

#define LPMP3_SSS3 ( \
	SSMSK(D0I3_MASK, PMU_AUDIO_SLIM1_LSS_49-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SLIM2_LSS_50-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP0_LSS_51-48) | \
	SSMSK(D0I3_MASK, PMU_AUDIO_SSP1_LSS_52-48) | \
	SSMSK(D0I3_MASK, PMU_GP_DMA_LSS_54-48))

extern void pmu_set_s0ix_possible(int state);
extern int log_wakeup_irq(void);
extern void s0ix_complete(void);
extern int mdfld_clv_nc_set_power_state(int, int, int, int *);

#endif
