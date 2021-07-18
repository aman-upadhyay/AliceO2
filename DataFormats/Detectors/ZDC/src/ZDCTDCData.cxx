// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

#include "DataFormatsZDC/ZDCTDCData.h"

using namespace o2::zdc;

void o2::zdc::ZDCTDCData::print() const
{
  printf("%2d (%s) %d = %8.3f @ %d = %6.3f\n", id, channelName(id), amp, amplitude(), val, value());
}
