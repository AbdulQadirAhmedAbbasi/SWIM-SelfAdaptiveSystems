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

#include "Server.h"
#include <stdlib.h>     /* srand, rand */

Server::Server() {
    this->id = rand() % 100 + 1;     // random id in the range 1 to 100;
    this->name = "Server" + this->id; 
}

void Server::setServerWeigth(int weight) {
    this->weight = weight;
}

int Server::getServerWeigth()
{
    return this->weight;
}

int Server::getServerId()
{
    return this->id;
}
