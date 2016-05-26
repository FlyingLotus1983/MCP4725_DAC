//***************************************************************************
//  MCP4725_DAC.h
//  Programmer:  Neil Jansen (njansen1@gmail.com)
//  Date:        Nov 27 2012
//  Platform:    Arduino v1.01
//  Description: 12-Bit Digital-to-Analog Converter with EEPROM Memory in SOT-23-6
//***************************************************************************
#ifndef MCP4725_DAC_h
#define MCP4725_DAC_h

#include "Arduino.h"

class mcp4725_dac
{
  public:
    //Constructor
    mcp4725_dac();
    
    void begin(byte address);
    
    //Write a value to the digital pot
    void setDacValue(unsigned int value);
  private:
    byte mcp_address; //I2C address
};


#endif