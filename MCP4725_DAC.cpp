#include "Arduino.h"
#include <Wire.h>
#include <MCP4725_DAC.h>

//Constructor
mcp4725_dac::mcp4725_dac()
{
}

//begin
void mcp4725_dac::begin(byte address)
{
  //default address is 0b1100000
	mcp_address = address;
}
  
//Write a value to the digital pot
void mcp4725_dac::setDacValue(unsigned int value)
{
  const byte WriteOnly       = 0b01000000;
  const byte WriteWithEeprom = 0b01100000;
  Wire.beginTransmission(mcp_address);
  Wire.write(WriteOnly);
  Wire.write((byte)((value >> 4) & 0x00FF));
  Wire.write((byte)((value << 4) & 0x00FF));
  Wire.endTransmission();
}
