//
// This file is part of an OMNeT++/OMNEST simulation example.
//
// Copyright (C) 2006-2015 OpenSim Ltd.
//
// This file is distributed WITHOUT ANY WARRANTY. See the file
// `license' for details on this and other legal matters.
//

#ifndef __QUEUEING_ROUTER_H
#define __QUEUEING_ROUTER_H

#include "QueueingDefs.h"

namespace queueing {

// routing algorithms
enum {
     ALG_RANDOM,
     ALG_ROUND_ROBIN,
     ALG_WEIGHTED_ROUND_ROBIN, ///////// Added by Abdul
     ALG_MIN_QUEUE_LENGTH,
     ALG_MIN_DELAY,
     ALG_MIN_SERVICE_TIME
};

/**
 * Sends the messages to different outputs depending on a set algorithm.
 */
class QUEUEING_API Router : public cSimpleModule
{
    private:
        int routingAlgorithm;  // the algorithm we are using for routing
        int rrCounter;         // msgCounter for round robin routing

        // Added by Abdul for weighted round robbin algorithm
        //initializations 
        int maxWeight;         //maximum weight that can be assigned to any server
        int minWeight;         //minimum weight that can be assigned to any server
        int requestCounter;    //currently assigned total requests to the server according to weight 
        int serverWeights [3] = {3, 2, 1}; //array of manual server weights
        int wrrCounter;    //current server Index
        //int outGateIndex;    //server to assign the request according to associated weights 
        //int gateSize;        //total servers

        //int *serverWeights = new int[gateSize]; //array of random server weights
        //random weights allocations to all servers
        /*for(int i= 0; i < gateSize; i++)
        {
            serverWeights[i] = rand() % maxWeight + 1;
            //displaying weights
            cout<<serverWeights[i];
            cout<< endl;
        }*/

    protected:
        virtual void initialize() override;
        virtual void handleMessage(cMessage *msg) override;
};

}; //namespace

#endif
