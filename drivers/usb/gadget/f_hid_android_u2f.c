#include <linux/platform_device.h>
#include <linux/usb/g_hid.h>

/* HID descriptor for a mouse */
static struct hidg_func_descriptor ghid_device_android_u2f = {
	.subclass      = 0x01, /* Boot Interface Subclass */
	.protocol      = 0x00, /* Raw HID */
	.report_length = 512,
	.report_desc_length	= 34,
	.report_desc = {
		0x06, 0xD0, 0xF1, // Usage Page (FIDO Usage Page)
		0x09, 0x01,       // Usage (FIDO Usage U2F HID)
		0xA1, 0x01,       // Collection (Application)
		0x09, 0x20,       // Usage (FIDO Usage Data In)
		0x15, 0x00,       // Logical Minimum (0)
		0x26, 0xFF, 0x00, // Logical Maximum (255)
		0x75, 0x08,       // Report Size (8)
		0x95, 0x40,       // Report Count (HID Input Report Bytes)
		0x81, 0x02,       // Input (HID Data & HID Absolute & HID Variable)
		0x09, 0x21,       // Usage (FIDO Usage Data Out)
		0x15, 0x00,       // Logical Minimum (0)
		0x26, 0xFF, 0x00, // Logical Maximum (255)
		0x75, 0x08,       // Report Size (8)
		0x95, 0x40,       // Report Count (HID Output Report Bytes)
		0x91, 0x02,       // Output (HID Data & HID Absolute & HID Variable)
		0xC0              // End Collection
	}
};
