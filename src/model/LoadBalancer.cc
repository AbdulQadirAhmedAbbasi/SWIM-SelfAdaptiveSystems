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

#include "LoadBalancer.h"
#include<array>

LoadBalancer::LoadBalancer() {

}

LoadBalancer::~LoadBalancer() {

}

void LoadBalancer::setServerList(Server servers[])
{
    this->serverIds = new int[servers.size()];
    this->serverWeights = new int[servers.size()]
    for(int i = 0; i < servers.size(); i++)
    {
        serverIds[i] = servers[i].id;
        serverWeigths[i] = servers[i].weight;
    }
}

