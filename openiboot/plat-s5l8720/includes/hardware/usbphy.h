#ifndef HW_USBPHY_H
#define HW_USBPHY_H

#define USB_PHY 0x3C400000

// Registers
#define OPHYPWR     0
#define OPHYCLK     0x4
#define ORSTCON     0x8
#define OPHYUNK1    0x1C
#define OPHYUNK2    0x44
#define OPHYCHARGER 0x48

// Values
#define OPHYPWR_FORCESUSPEND 0x1
#define OPHYPWR_PLLPOWERDOWN 0x2
#define OPHYPWR_XOPOWERDOWN 0x4
#define OPHYPWR_ANALOGPOWERDOWN 0x8
#define OPHYPWR_UNKNOWNPOWERDOWN 0x10
#define OPHYPWR_POWERON 0x0	// all the previous flags are off

#define OPHYCLK_CLKSEL_MASK 0x3

#define OPHYCLK_SPEED_48MHZ 48000000
#define OPHYCLK_SPEED_12MHZ 12000000
#define OPHYCLK_SPEED_24MHZ 24000000

#define OPHYCLK_CLKSEL_12MHZ 0x0
#define OPHYCLK_CLKSEL_24MHZ 0x1
#define OPHYCLK_CLKSEL_48MHZ 0x2
#define OPHYCLK_CLKSEL_OTHER 0x3

#define ORSTCON_PHYSWRESET 0x1
#define ORSTCON_LINKSWRESET 0x2
#define ORSTCON_PHYLINKSWRESET 0x4

#define OPHYUNK1_START 0x6
#define OPHYUNK1_STOP_MASK 0x2

#define OPHYUNK2_START 0xE3F

#define OPHYCHARGER_DN     (1 << 2)
#define OPHYCHARGER_DP     (1 << 1)
#define OPHYCHARGER_NONE   0
#define OPHYCHARGER_MASK   0x6

#define USB_PHYPWRPOWERON_DELAYUS 10
#define USB_RESET2_DELAYUS 20
#define USB_RESET_DELAYUS 1000

#endif
