/*******************************************************************************
 * Simulator of Web Infrastructure and Management
 * Copyright (c) 2016 Carnegie Mellon University.
 * All Rights Reserved.
 *  
 * THIS SOFTWARE IS PROVIDED "AS IS," WITH NO WARRANTIES WHATSOEVER. CARNEGIE
 * MELLON UNIVERSITY EXPRESSLY DISCLAIMS TO THE FULLEST EXTENT PERMITTED BY LAW
 * ALL EXPRESS, IMPLIED, AND STATUTORY WARRANTIES, INCLUDING, WITHOUT
 * LIMITATION, THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE, AND NON-INFRINGEMENT OF PROPRIETARY RIGHTS.
 *  
 * Released under a BSD license, please see license.txt for full terms.
 * DM-0003883
 *******************************************************************************/
/*
 * ServerUtilization.cc
 *
 *  Created on: Apr 2, 2013
 *      Author: gmoreno
 */

#include "ServerPowerConsumption.h"

using namespace omnetpp;

ServerPowerConsumption::ServerPowerConsumption()
    : start(0), busyTime(0), busyPeriodStart(0), isBusy(false)
{
}

ServerPowerConsumption::ServerPowerConsumption(const ServerPowerConsumption& su)
    : start(su.start), busyTime(su.busyTime), busyPeriodStart(su.busyPeriodStart), isBusy(su.isBusy)
{
}


/**
 * start a new measurement period
 */
void ServerPowerConsumption::reset() {
    busyPeriodStart = start = simTime();
    busyTime = 0;
}

void ServerPowerConsumption::busy() {
    busyPeriodStart = simTime();
    isBusy = true;
}

void ServerPowerConsumption::idle() {
    busyTime += simTime() - busyPeriodStart;
    isBusy = false;
}



/**
 * get powerconsumption since the last reset
 */
double ServerPowerConsumption::getPowerConsumption() const {
    double u = busyTime.dbl();
    // main logic of power consumption
    return 380 * u; //assume 380 is peak power
}


