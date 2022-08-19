/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#pragma once

#include "fboss/agent/hw/bcm/BcmError.h"

extern "C" {
#include <bcm/error.h>
#include <bcm/field.h>
}

namespace facebook::fboss::utility {

/*
 * get EM group ID
 */
int getEMGroupID(int gid);

/*
 * init EM Table
 */
int initEMTable(int unit, bcm_field_group_t gid);

} // namespace facebook::fboss::utility