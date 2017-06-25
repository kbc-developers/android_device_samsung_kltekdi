/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>
<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> fetch130

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

<<<<<<< HEAD
#include "init_msm.h"

void gsm_properties()
{
    property_set("telephony.lteOnGsmDevice", "1");
    property_set("ro.telephony.default_network", "9");
    property_set("ro.telephony.ril.config", "newDialCode");
    property_set("ro.ril.enable.dcm.feature", "1");
}
=======
#include "init_msm8974.h"

#define ISMATCH(a, b) (!strncmp((a), (b), PROP_VALUE_MAX))
>>>>>>> fetch130

void cdma_properties(char const *default_cdma_sub,
        char const *operator_numeric, char const *operator_alpha)
{
    property_set("ril.subscription.types", "NV,RUIM");
    property_set("ro.cdma.home.operator.numeric", operator_numeric);
    property_set("ro.cdma.home.operator.alpha", operator_alpha);
    property_set("ro.telephony.default_cdma_sub", default_cdma_sub);
<<<<<<< HEAD
    property_set("ro.telephony.default_network", "5");
=======
    property_set("ro.telephony.default_network", "10");
>>>>>>> fetch130
    property_set("ro.telephony.ril.config", "newDriverCallU,newDialCode");
    property_set("telephony.lteOnCdmaDevice", "1");
}

<<<<<<< HEAD
void init_msm_properties(unsigned long msm_id, unsigned long msm_ver, char *board_type)
{
    char platform[PROP_VALUE_MAX];
    int rc;

    UNUSED(msm_id);
    UNUSED(msm_ver);
    UNUSED(board_type);

=======
void init_target_properties()
{
    char platform[PROP_VALUE_MAX];
    char bootloader[PROP_VALUE_MAX];
    char device[PROP_VALUE_MAX];
    char devicename[PROP_VALUE_MAX];
    int rc;

>>>>>>> fetch130
    rc = property_get("ro.board.platform", platform);
    if (!rc || !ISMATCH(platform, ANDROID_TARGET))
        return;

<<<<<<< HEAD
    property_set("ro.build.fingerprint", "samsung/SCL23/SCL23:5.0/LRX21T/SC04FOMU1WOI2:user/release-keys");
    property_set("ro.build.description", "kltekdi-user 5.0 LRX21T SC04FOMU1WOI2 release-keys");
    property_set("ro.product.model", "SCL23");
    property_set("ro.product.device", "kltekdi");
    cdma_properties("1", "44054", "kltekdi");
}
=======
    property_get("ro.bootloader", bootloader);

        property_set("ro.build.fingerprint", "samsung/SCL23/SCL23:4.4.2/KOT49H/SCL23KDU1AND1:user/release-keys");
        property_set("ro.build.description", "kltekdi-user 4.4.2 KOT49H SCL23KDU1AND1 release-keys");
        property_set("ro.product.model", "SCL23");
        property_set("ro.product.device", "kltekdi");
        property_set("telephony.sms.pseudo_multipart", "1");
        cdma_properties("1", "44054", "KDDI");

    property_get("ro.product.device", device);
    strlcpy(devicename, device, sizeof(devicename));
    INFO("Found bootloader id %s setting build properties for %s device\n", bootloader, devicename);
}

>>>>>>> fetch130
