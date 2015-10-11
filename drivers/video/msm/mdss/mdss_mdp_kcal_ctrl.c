config FB_MSM_MDSS_WRITEBACK
	bool "MDSS Writeback Panel"
	---help---
	The MDSS Writeback Panel provides support for routing the output of
	MDSS frame buffer driver and MDP processing to memory.

config FB_MSM_MDSS_SPECIFIC_PANEL
	depends on FB_MSM_MDSS
	bool
	prompt "MDSS Specific panel"
	default n
	---help---
	The MDSS Specific Panel provides support for specific panel driver
	file.

config FB_MSM_MDSS_HDMI_PANEL
	depends on FB_MSM_MDSS
	bool "MDSS HDMI Tx Panel"
	default n
	---help---
	The MDSS HDMI Panel provides support for transmitting TMDS signals of
	MDSS frame buffer data to connected hdmi compliant TVs, monitors etc.

config FB_MSM_MDSS_HDMI_MHL_SII8334
	depends on FB_MSM_MDSS_HDMI_PANEL
	bool 'MHL SII8334 support '
	default n
	---help---
	  Support the HDMI to MHL conversion.
	  MHL (Mobile High-Definition Link) technology
	  uses USB connector to output HDMI content

config FB_MSM_MDSS_DSI_CTRL_STATUS
	tristate "DSI controller status check feature"
	---help---
	  Check DSI controller status periodically (default period is 5
	  seconds) by sending Bus-Turn-Around (BTA) command. If DSI controller
	  fails to acknowledge the BTA command, it sends PANEL_ALIVE=0 status
	  to HAL layer to reset the controller.

config FB_MSM_MDSS_MDP3
	depends on FB_MSM_MDSS
	bool "MDP3 display controller"
	---help---
	The MDP3 provides support for an older version display controller
	included in latest display sub-system, known as MDSS.

config FB_MSM_MDSS_SUB_AREA_TABLE_51
	bool "MDSS white tuning table"
	default n

config FB_MSM_MDSS_KCAL_CTRL
	depends on FB_MSM_MDSS
	bool "MDSS color control"
	---help---
	  Enable sysfs for post-processing control of mdss-mdp5 display
	  controllers in MDSS.
