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
#include "UtilityScorer.h"
#include "PowerScorer.h"
#include <algorithm>
#include <cfloat>
#include <omnetpp.h>


/**
 * returns Power consumption;
 */
double PowerScorer::getAccruedPowerConsumption(const Model& model, const Configuration& configuration, const Environment& environment, const Observations& observations)
{
    
    double utilization = UtilityScorer::getAccruedUtility(model, configuration, environment, observations);    
    return configuration.getPeakPowerConsumption() * utilization/100;
}

