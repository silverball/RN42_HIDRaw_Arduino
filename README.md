RN42_HIDRaw_Arduino Library
Chris Leitner - 2012

More information on the RN42 HID Bluetooth Module:
http://www.rovingnetworks.com/resources/download/120/HID_User_Manual

RN42 HID raw report format:
  |start(1 byte)|length(1 byte)|descriptor(1 byte)|data(length - 1 [for the descriptor])
Keyboard:
  |0xFD|9|1|modifier|0x00|code 1|code 2|code 3|code 4|code 5|code 6
Keyboard modifier bits (sent as one byte)
  bit 7		|bit 6 		|bit 5		|bit 4	|bit 3	|bit 2	|bit 1		|bit 0
  rt GUI	|rt alt		|rt shift	|rt ctrl|lt GUI	|lt alt	|lt shift	|lt ctrl
  
 Version 0.1 11-30-2012
 First release.