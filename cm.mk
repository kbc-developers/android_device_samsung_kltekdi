$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Enhanced NFC
$(call inherit-product, vendor/cm/config/nfc_enhanced.mk)

$(call inherit-product, device/samsung/kltekdi/full_kltekdi.mk)

PRODUCT_DEVICE := kltekdi
PRODUCT_NAME := cm_kltekdi
