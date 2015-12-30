#ifndef _TLK110_H_
#define _TLK110_H_

/* TLK110 PHY register offsets */
#define TLK110_COARSEGAIN_REG 0x00A3
#define TLK110_LPFHPF_REG 0x00AC
#define TLK110_SPAREANALOG_REG 0x00B9
#define TLK110_VRCR_REG 0x00D0
#define TLK110_SETFFE_REG 0x0107
#define TLK110_FTSP_REG 0x0154
#define TLK110_ALFATPIDL_REG 0x002A
#define TLK110_PSCOEF21_REG 0x0096
#define TLK110_PSCOEF3_REG 0x0097
#define TLK110_ALFAFACTOR1_REG 0x002C
#define TLK110_ALFAFACTOR2_REG 0x0023
#define TLK110_CFGPS_REG 0x0095
#define TLK110_FTSPTXGAIN_REG 0x0150
#define TLK110_SWSCR3_REG 0x000B
#define TLK110_SCFALLBACK_REG 0x0040
#define TLK110_PHYRCR_REG 0x001F

/* TLK110 register writes values */
#define TLK110_COARSEGAIN_VAL 0x0000
#define TLK110_LPFHPF_VAL 0x8000
#define TLK110_SPANALOG_VAL 0x0000
#define TLK110_VRCR_VAL 0x0008
#define TLK110_SETFFE_VAL 0x0605
#define TLK110_FTSP_VAL 0x0255
#define TLK110_ALFATPIDL_VAL 0x7998
#define TLK110_PSCOEF21_VAL 0x3A20
#define TLK110_PSCOEF3_VAL 0x003F
#define TLK110_ALFACTOR1_VAL 0xFF80
#define TLK110_ALFACTOR2_VAL 0x021C
#define TLK110_CFGPS_VAL 0x0000
#define TLK110_FTSPTXGAIN_VAL 0x6A88
#define TLK110_SWSCR3_VAL 0x0000
#define TLK110_SCFALLBACK_VAL 0xC11D
#define TLK110_PHYRCR_VAL 0x4000

#endif  /* _TLK110_H_ */
