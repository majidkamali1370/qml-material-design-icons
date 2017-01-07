#ifndef MATERIAL_ICONS_H
#define MATERIAL_ICONS_H

#include <QObject>
#include <QString>

class MaterialIcons : public QObject {
    Q_OBJECT

    Q_PROPERTY(QString mdiAccessPoint READ mdiAccessPoint CONSTANT)
    Q_PROPERTY(QString mdiAccessPointNetwork READ mdiAccessPointNetwork CONSTANT)
    Q_PROPERTY(QString mdiAccount READ mdiAccount CONSTANT)
    Q_PROPERTY(QString mdiAccountAlert READ mdiAccountAlert CONSTANT)
    Q_PROPERTY(QString mdiAccountBox READ mdiAccountBox CONSTANT)
    Q_PROPERTY(QString mdiAccountBoxOutline READ mdiAccountBoxOutline CONSTANT)
    Q_PROPERTY(QString mdiAccountCardDetails READ mdiAccountCardDetails CONSTANT)
    Q_PROPERTY(QString mdiAccountCheck READ mdiAccountCheck CONSTANT)
    Q_PROPERTY(QString mdiAccountCircle READ mdiAccountCircle CONSTANT)
    Q_PROPERTY(QString mdiAccountConvert READ mdiAccountConvert CONSTANT)
    Q_PROPERTY(QString mdiAccountKey READ mdiAccountKey CONSTANT)
    Q_PROPERTY(QString mdiAccountLocation READ mdiAccountLocation CONSTANT)
    Q_PROPERTY(QString mdiAccountMinus READ mdiAccountMinus CONSTANT)
    Q_PROPERTY(QString mdiAccountMultiple READ mdiAccountMultiple CONSTANT)
    Q_PROPERTY(QString mdiAccountMultipleMinus READ mdiAccountMultipleMinus CONSTANT)
    Q_PROPERTY(QString mdiAccountMultipleOutline READ mdiAccountMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiAccountMultiplePlus READ mdiAccountMultiplePlus CONSTANT)
    Q_PROPERTY(QString mdiAccountNetwork READ mdiAccountNetwork CONSTANT)
    Q_PROPERTY(QString mdiAccountOff READ mdiAccountOff CONSTANT)
    Q_PROPERTY(QString mdiAccountOutline READ mdiAccountOutline CONSTANT)
    Q_PROPERTY(QString mdiAccountPlus READ mdiAccountPlus CONSTANT)
    Q_PROPERTY(QString mdiAccountRemove READ mdiAccountRemove CONSTANT)
    Q_PROPERTY(QString mdiAccountSearch READ mdiAccountSearch CONSTANT)
    Q_PROPERTY(QString mdiAccountSettings READ mdiAccountSettings CONSTANT)
    Q_PROPERTY(QString mdiAccountSettingsVariant READ mdiAccountSettingsVariant CONSTANT)
    Q_PROPERTY(QString mdiAccountStar READ mdiAccountStar CONSTANT)
    Q_PROPERTY(QString mdiAccountStarVariant READ mdiAccountStarVariant CONSTANT)
    Q_PROPERTY(QString mdiAccountSwitch READ mdiAccountSwitch CONSTANT)
    Q_PROPERTY(QString mdiAdjust READ mdiAdjust CONSTANT)
    Q_PROPERTY(QString mdiAirConditioner READ mdiAirConditioner CONSTANT)
    Q_PROPERTY(QString mdiAirballoon READ mdiAirballoon CONSTANT)
    Q_PROPERTY(QString mdiAirplane READ mdiAirplane CONSTANT)
    Q_PROPERTY(QString mdiAirplaneLanding READ mdiAirplaneLanding CONSTANT)
    Q_PROPERTY(QString mdiAirplaneOff READ mdiAirplaneOff CONSTANT)
    Q_PROPERTY(QString mdiAirplaneTakeoff READ mdiAirplaneTakeoff CONSTANT)
    Q_PROPERTY(QString mdiAirplay READ mdiAirplay CONSTANT)
    Q_PROPERTY(QString mdiAlarm READ mdiAlarm CONSTANT)
    Q_PROPERTY(QString mdiAlarmCheck READ mdiAlarmCheck CONSTANT)
    Q_PROPERTY(QString mdiAlarmMultiple READ mdiAlarmMultiple CONSTANT)
    Q_PROPERTY(QString mdiAlarmOff READ mdiAlarmOff CONSTANT)
    Q_PROPERTY(QString mdiAlarmPlus READ mdiAlarmPlus CONSTANT)
    Q_PROPERTY(QString mdiAlarmSnooze READ mdiAlarmSnooze CONSTANT)
    Q_PROPERTY(QString mdiAlbum READ mdiAlbum CONSTANT)
    Q_PROPERTY(QString mdiAlert READ mdiAlert CONSTANT)
    Q_PROPERTY(QString mdiAlertBox READ mdiAlertBox CONSTANT)
    Q_PROPERTY(QString mdiAlertCircle READ mdiAlertCircle CONSTANT)
    Q_PROPERTY(QString mdiAlertCircleOutline READ mdiAlertCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiAlertOctagon READ mdiAlertOctagon CONSTANT)
    Q_PROPERTY(QString mdiAlertOutline READ mdiAlertOutline CONSTANT)
    Q_PROPERTY(QString mdiAlpha READ mdiAlpha CONSTANT)
    Q_PROPERTY(QString mdiAlphabetical READ mdiAlphabetical CONSTANT)
    Q_PROPERTY(QString mdiAltimeter READ mdiAltimeter CONSTANT)
    Q_PROPERTY(QString mdiAmazon READ mdiAmazon CONSTANT)
    Q_PROPERTY(QString mdiAmazonClouddrive READ mdiAmazonClouddrive CONSTANT)
    Q_PROPERTY(QString mdiAmbulance READ mdiAmbulance CONSTANT)
    Q_PROPERTY(QString mdiAmplifier READ mdiAmplifier CONSTANT)
    Q_PROPERTY(QString mdiAnchor READ mdiAnchor CONSTANT)
    Q_PROPERTY(QString mdiAndroid READ mdiAndroid CONSTANT)
    Q_PROPERTY(QString mdiAndroidDebugBridge READ mdiAndroidDebugBridge CONSTANT)
    Q_PROPERTY(QString mdiAndroidStudio READ mdiAndroidStudio CONSTANT)
    Q_PROPERTY(QString mdiAngular READ mdiAngular CONSTANT)
    Q_PROPERTY(QString mdiAnimation READ mdiAnimation CONSTANT)
    Q_PROPERTY(QString mdiApple READ mdiApple CONSTANT)
    Q_PROPERTY(QString mdiAppleFinder READ mdiAppleFinder CONSTANT)
    Q_PROPERTY(QString mdiAppleIos READ mdiAppleIos CONSTANT)
    Q_PROPERTY(QString mdiAppleKeyboardCaps READ mdiAppleKeyboardCaps CONSTANT)
    Q_PROPERTY(QString mdiAppleKeyboardCommand READ mdiAppleKeyboardCommand CONSTANT)
    Q_PROPERTY(QString mdiAppleKeyboardControl READ mdiAppleKeyboardControl CONSTANT)
    Q_PROPERTY(QString mdiAppleKeyboardOption READ mdiAppleKeyboardOption CONSTANT)
    Q_PROPERTY(QString mdiAppleKeyboardShift READ mdiAppleKeyboardShift CONSTANT)
    Q_PROPERTY(QString mdiAppleMobileme READ mdiAppleMobileme CONSTANT)
    Q_PROPERTY(QString mdiAppleSafari READ mdiAppleSafari CONSTANT)
    Q_PROPERTY(QString mdiApplication READ mdiApplication CONSTANT)
    Q_PROPERTY(QString mdiAppnet READ mdiAppnet CONSTANT)
    Q_PROPERTY(QString mdiApps READ mdiApps CONSTANT)
    Q_PROPERTY(QString mdiArchive READ mdiArchive CONSTANT)
    Q_PROPERTY(QString mdiArrangeBringForward READ mdiArrangeBringForward CONSTANT)
    Q_PROPERTY(QString mdiArrangeBringToFront READ mdiArrangeBringToFront CONSTANT)
    Q_PROPERTY(QString mdiArrangeSendBackward READ mdiArrangeSendBackward CONSTANT)
    Q_PROPERTY(QString mdiArrangeSendToBack READ mdiArrangeSendToBack CONSTANT)
    Q_PROPERTY(QString mdiArrowAll READ mdiArrowAll CONSTANT)
    Q_PROPERTY(QString mdiArrowBottomLeft READ mdiArrowBottomLeft CONSTANT)
    Q_PROPERTY(QString mdiArrowBottomRight READ mdiArrowBottomRight CONSTANT)
    Q_PROPERTY(QString mdiArrowCompress READ mdiArrowCompress CONSTANT)
    Q_PROPERTY(QString mdiArrowCompressAll READ mdiArrowCompressAll CONSTANT)
    Q_PROPERTY(QString mdiArrowDown READ mdiArrowDown CONSTANT)
    Q_PROPERTY(QString mdiArrowDownBold READ mdiArrowDownBold CONSTANT)
    Q_PROPERTY(QString mdiArrowDownBoldCircle READ mdiArrowDownBoldCircle CONSTANT)
    Q_PROPERTY(QString mdiArrowDownBoldCircleOutline READ mdiArrowDownBoldCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowDownBoldHexagonOutline READ mdiArrowDownBoldHexagonOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowDownDropCircle READ mdiArrowDownDropCircle CONSTANT)
    Q_PROPERTY(QString mdiArrowDownDropCircleOutline READ mdiArrowDownDropCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowExpand READ mdiArrowExpand CONSTANT)
    Q_PROPERTY(QString mdiArrowExpandAll READ mdiArrowExpandAll CONSTANT)
    Q_PROPERTY(QString mdiArrowLeft READ mdiArrowLeft CONSTANT)
    Q_PROPERTY(QString mdiArrowLeftBold READ mdiArrowLeftBold CONSTANT)
    Q_PROPERTY(QString mdiArrowLeftBoldCircle READ mdiArrowLeftBoldCircle CONSTANT)
    Q_PROPERTY(QString mdiArrowLeftBoldCircleOutline READ mdiArrowLeftBoldCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowLeftBoldHexagonOutline READ mdiArrowLeftBoldHexagonOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowLeftDropCircle READ mdiArrowLeftDropCircle CONSTANT)
    Q_PROPERTY(QString mdiArrowLeftDropCircleOutline READ mdiArrowLeftDropCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowRight READ mdiArrowRight CONSTANT)
    Q_PROPERTY(QString mdiArrowRightBold READ mdiArrowRightBold CONSTANT)
    Q_PROPERTY(QString mdiArrowRightBoldCircle READ mdiArrowRightBoldCircle CONSTANT)
    Q_PROPERTY(QString mdiArrowRightBoldCircleOutline READ mdiArrowRightBoldCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowRightBoldHexagonOutline READ mdiArrowRightBoldHexagonOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowRightDropCircle READ mdiArrowRightDropCircle CONSTANT)
    Q_PROPERTY(QString mdiArrowRightDropCircleOutline READ mdiArrowRightDropCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowTopLeft READ mdiArrowTopLeft CONSTANT)
    Q_PROPERTY(QString mdiArrowTopRight READ mdiArrowTopRight CONSTANT)
    Q_PROPERTY(QString mdiArrowUp READ mdiArrowUp CONSTANT)
    Q_PROPERTY(QString mdiArrowUpBold READ mdiArrowUpBold CONSTANT)
    Q_PROPERTY(QString mdiArrowUpBoldCircle READ mdiArrowUpBoldCircle CONSTANT)
    Q_PROPERTY(QString mdiArrowUpBoldCircleOutline READ mdiArrowUpBoldCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowUpBoldHexagonOutline READ mdiArrowUpBoldHexagonOutline CONSTANT)
    Q_PROPERTY(QString mdiArrowUpDropCircle READ mdiArrowUpDropCircle CONSTANT)
    Q_PROPERTY(QString mdiArrowUpDropCircleOutline READ mdiArrowUpDropCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiAssistant READ mdiAssistant CONSTANT)
    Q_PROPERTY(QString mdiAt READ mdiAt CONSTANT)
    Q_PROPERTY(QString mdiAttachment READ mdiAttachment CONSTANT)
    Q_PROPERTY(QString mdiAudiobook READ mdiAudiobook CONSTANT)
    Q_PROPERTY(QString mdiAutoFix READ mdiAutoFix CONSTANT)
    Q_PROPERTY(QString mdiAutoUpload READ mdiAutoUpload CONSTANT)
    Q_PROPERTY(QString mdiAutorenew READ mdiAutorenew CONSTANT)
    Q_PROPERTY(QString mdiAvTimer READ mdiAvTimer CONSTANT)
    Q_PROPERTY(QString mdiBaby READ mdiBaby CONSTANT)
    Q_PROPERTY(QString mdiBabyBuggy READ mdiBabyBuggy CONSTANT)
    Q_PROPERTY(QString mdiBackburger READ mdiBackburger CONSTANT)
    Q_PROPERTY(QString mdiBackspace READ mdiBackspace CONSTANT)
    Q_PROPERTY(QString mdiBackupRestore READ mdiBackupRestore CONSTANT)
    Q_PROPERTY(QString mdiBandcamp READ mdiBandcamp CONSTANT)
    Q_PROPERTY(QString mdiBank READ mdiBank CONSTANT)
    Q_PROPERTY(QString mdiBarcode READ mdiBarcode CONSTANT)
    Q_PROPERTY(QString mdiBarcodeScan READ mdiBarcodeScan CONSTANT)
    Q_PROPERTY(QString mdiBarley READ mdiBarley CONSTANT)
    Q_PROPERTY(QString mdiBarrel READ mdiBarrel CONSTANT)
    Q_PROPERTY(QString mdiBasecamp READ mdiBasecamp CONSTANT)
    Q_PROPERTY(QString mdiBasket READ mdiBasket CONSTANT)
    Q_PROPERTY(QString mdiBasketFill READ mdiBasketFill CONSTANT)
    Q_PROPERTY(QString mdiBasketUnfill READ mdiBasketUnfill CONSTANT)
    Q_PROPERTY(QString mdiBattery READ mdiBattery CONSTANT)
    Q_PROPERTY(QString mdiBattery10 READ mdiBattery10 CONSTANT)
    Q_PROPERTY(QString mdiBattery20 READ mdiBattery20 CONSTANT)
    Q_PROPERTY(QString mdiBattery30 READ mdiBattery30 CONSTANT)
    Q_PROPERTY(QString mdiBattery40 READ mdiBattery40 CONSTANT)
    Q_PROPERTY(QString mdiBattery50 READ mdiBattery50 CONSTANT)
    Q_PROPERTY(QString mdiBattery60 READ mdiBattery60 CONSTANT)
    Q_PROPERTY(QString mdiBattery70 READ mdiBattery70 CONSTANT)
    Q_PROPERTY(QString mdiBattery80 READ mdiBattery80 CONSTANT)
    Q_PROPERTY(QString mdiBattery90 READ mdiBattery90 CONSTANT)
    Q_PROPERTY(QString mdiBatteryAlert READ mdiBatteryAlert CONSTANT)
    Q_PROPERTY(QString mdiBatteryCharging READ mdiBatteryCharging CONSTANT)
    Q_PROPERTY(QString mdiBatteryCharging100 READ mdiBatteryCharging100 CONSTANT)
    Q_PROPERTY(QString mdiBatteryCharging20 READ mdiBatteryCharging20 CONSTANT)
    Q_PROPERTY(QString mdiBatteryCharging30 READ mdiBatteryCharging30 CONSTANT)
    Q_PROPERTY(QString mdiBatteryCharging40 READ mdiBatteryCharging40 CONSTANT)
    Q_PROPERTY(QString mdiBatteryCharging60 READ mdiBatteryCharging60 CONSTANT)
    Q_PROPERTY(QString mdiBatteryCharging80 READ mdiBatteryCharging80 CONSTANT)
    Q_PROPERTY(QString mdiBatteryCharging90 READ mdiBatteryCharging90 CONSTANT)
    Q_PROPERTY(QString mdiBatteryMinus READ mdiBatteryMinus CONSTANT)
    Q_PROPERTY(QString mdiBatteryNegative READ mdiBatteryNegative CONSTANT)
    Q_PROPERTY(QString mdiBatteryOutline READ mdiBatteryOutline CONSTANT)
    Q_PROPERTY(QString mdiBatteryPlus READ mdiBatteryPlus CONSTANT)
    Q_PROPERTY(QString mdiBatteryPositive READ mdiBatteryPositive CONSTANT)
    Q_PROPERTY(QString mdiBatteryUnknown READ mdiBatteryUnknown CONSTANT)
    Q_PROPERTY(QString mdiBeach READ mdiBeach CONSTANT)
    Q_PROPERTY(QString mdiBeaker READ mdiBeaker CONSTANT)
    Q_PROPERTY(QString mdiBeats READ mdiBeats CONSTANT)
    Q_PROPERTY(QString mdiBeer READ mdiBeer CONSTANT)
    Q_PROPERTY(QString mdiBehance READ mdiBehance CONSTANT)
    Q_PROPERTY(QString mdiBell READ mdiBell CONSTANT)
    Q_PROPERTY(QString mdiBellOff READ mdiBellOff CONSTANT)
    Q_PROPERTY(QString mdiBellOutline READ mdiBellOutline CONSTANT)
    Q_PROPERTY(QString mdiBellPlus READ mdiBellPlus CONSTANT)
    Q_PROPERTY(QString mdiBellRing READ mdiBellRing CONSTANT)
    Q_PROPERTY(QString mdiBellRingOutline READ mdiBellRingOutline CONSTANT)
    Q_PROPERTY(QString mdiBellSleep READ mdiBellSleep CONSTANT)
    Q_PROPERTY(QString mdiBeta READ mdiBeta CONSTANT)
    Q_PROPERTY(QString mdiBible READ mdiBible CONSTANT)
    Q_PROPERTY(QString mdiBike READ mdiBike CONSTANT)
    Q_PROPERTY(QString mdiBing READ mdiBing CONSTANT)
    Q_PROPERTY(QString mdiBinoculars READ mdiBinoculars CONSTANT)
    Q_PROPERTY(QString mdiBio READ mdiBio CONSTANT)
    Q_PROPERTY(QString mdiBiohazard READ mdiBiohazard CONSTANT)
    Q_PROPERTY(QString mdiBitbucket READ mdiBitbucket CONSTANT)
    Q_PROPERTY(QString mdiBlackMesa READ mdiBlackMesa CONSTANT)
    Q_PROPERTY(QString mdiBlackberry READ mdiBlackberry CONSTANT)
    Q_PROPERTY(QString mdiBlender READ mdiBlender CONSTANT)
    Q_PROPERTY(QString mdiBlinds READ mdiBlinds CONSTANT)
    Q_PROPERTY(QString mdiBlockHelper READ mdiBlockHelper CONSTANT)
    Q_PROPERTY(QString mdiBlogger READ mdiBlogger CONSTANT)
    Q_PROPERTY(QString mdiBluetooth READ mdiBluetooth CONSTANT)
    Q_PROPERTY(QString mdiBluetoothAudio READ mdiBluetoothAudio CONSTANT)
    Q_PROPERTY(QString mdiBluetoothConnect READ mdiBluetoothConnect CONSTANT)
    Q_PROPERTY(QString mdiBluetoothOff READ mdiBluetoothOff CONSTANT)
    Q_PROPERTY(QString mdiBluetoothSettings READ mdiBluetoothSettings CONSTANT)
    Q_PROPERTY(QString mdiBluetoothTransfer READ mdiBluetoothTransfer CONSTANT)
    Q_PROPERTY(QString mdiBlur READ mdiBlur CONSTANT)
    Q_PROPERTY(QString mdiBlurLinear READ mdiBlurLinear CONSTANT)
    Q_PROPERTY(QString mdiBlurOff READ mdiBlurOff CONSTANT)
    Q_PROPERTY(QString mdiBlurRadial READ mdiBlurRadial CONSTANT)
    Q_PROPERTY(QString mdiBomb READ mdiBomb CONSTANT)
    Q_PROPERTY(QString mdiBone READ mdiBone CONSTANT)
    Q_PROPERTY(QString mdiBook READ mdiBook CONSTANT)
    Q_PROPERTY(QString mdiBookMinus READ mdiBookMinus CONSTANT)
    Q_PROPERTY(QString mdiBookMultiple READ mdiBookMultiple CONSTANT)
    Q_PROPERTY(QString mdiBookMultipleVariant READ mdiBookMultipleVariant CONSTANT)
    Q_PROPERTY(QString mdiBookOpen READ mdiBookOpen CONSTANT)
    Q_PROPERTY(QString mdiBookOpenPageVariant READ mdiBookOpenPageVariant CONSTANT)
    Q_PROPERTY(QString mdiBookOpenVariant READ mdiBookOpenVariant CONSTANT)
    Q_PROPERTY(QString mdiBookPlus READ mdiBookPlus CONSTANT)
    Q_PROPERTY(QString mdiBookVariant READ mdiBookVariant CONSTANT)
    Q_PROPERTY(QString mdiBookmark READ mdiBookmark CONSTANT)
    Q_PROPERTY(QString mdiBookmarkCheck READ mdiBookmarkCheck CONSTANT)
    Q_PROPERTY(QString mdiBookmarkMusic READ mdiBookmarkMusic CONSTANT)
    Q_PROPERTY(QString mdiBookmarkOutline READ mdiBookmarkOutline CONSTANT)
    Q_PROPERTY(QString mdiBookmarkPlus READ mdiBookmarkPlus CONSTANT)
    Q_PROPERTY(QString mdiBookmarkPlusOutline READ mdiBookmarkPlusOutline CONSTANT)
    Q_PROPERTY(QString mdiBookmarkRemove READ mdiBookmarkRemove CONSTANT)
    Q_PROPERTY(QString mdiBoombox READ mdiBoombox CONSTANT)
    Q_PROPERTY(QString mdiBorderAll READ mdiBorderAll CONSTANT)
    Q_PROPERTY(QString mdiBorderBottom READ mdiBorderBottom CONSTANT)
    Q_PROPERTY(QString mdiBorderColor READ mdiBorderColor CONSTANT)
    Q_PROPERTY(QString mdiBorderHorizontal READ mdiBorderHorizontal CONSTANT)
    Q_PROPERTY(QString mdiBorderInside READ mdiBorderInside CONSTANT)
    Q_PROPERTY(QString mdiBorderLeft READ mdiBorderLeft CONSTANT)
    Q_PROPERTY(QString mdiBorderNone READ mdiBorderNone CONSTANT)
    Q_PROPERTY(QString mdiBorderOutside READ mdiBorderOutside CONSTANT)
    Q_PROPERTY(QString mdiBorderRight READ mdiBorderRight CONSTANT)
    Q_PROPERTY(QString mdiBorderStyle READ mdiBorderStyle CONSTANT)
    Q_PROPERTY(QString mdiBorderTop READ mdiBorderTop CONSTANT)
    Q_PROPERTY(QString mdiBorderVertical READ mdiBorderVertical CONSTANT)
    Q_PROPERTY(QString mdiBowTie READ mdiBowTie CONSTANT)
    Q_PROPERTY(QString mdiBowl READ mdiBowl CONSTANT)
    Q_PROPERTY(QString mdiBowling READ mdiBowling CONSTANT)
    Q_PROPERTY(QString mdiBox READ mdiBox CONSTANT)
    Q_PROPERTY(QString mdiBoxCutter READ mdiBoxCutter CONSTANT)
    Q_PROPERTY(QString mdiBoxShadow READ mdiBoxShadow CONSTANT)
    Q_PROPERTY(QString mdiBridge READ mdiBridge CONSTANT)
    Q_PROPERTY(QString mdiBriefcase READ mdiBriefcase CONSTANT)
    Q_PROPERTY(QString mdiBriefcaseCheck READ mdiBriefcaseCheck CONSTANT)
    Q_PROPERTY(QString mdiBriefcaseDownload READ mdiBriefcaseDownload CONSTANT)
    Q_PROPERTY(QString mdiBriefcaseUpload READ mdiBriefcaseUpload CONSTANT)
    Q_PROPERTY(QString mdiBrightness1 READ mdiBrightness1 CONSTANT)
    Q_PROPERTY(QString mdiBrightness2 READ mdiBrightness2 CONSTANT)
    Q_PROPERTY(QString mdiBrightness3 READ mdiBrightness3 CONSTANT)
    Q_PROPERTY(QString mdiBrightness4 READ mdiBrightness4 CONSTANT)
    Q_PROPERTY(QString mdiBrightness5 READ mdiBrightness5 CONSTANT)
    Q_PROPERTY(QString mdiBrightness6 READ mdiBrightness6 CONSTANT)
    Q_PROPERTY(QString mdiBrightness7 READ mdiBrightness7 CONSTANT)
    Q_PROPERTY(QString mdiBrightnessAuto READ mdiBrightnessAuto CONSTANT)
    Q_PROPERTY(QString mdiBroom READ mdiBroom CONSTANT)
    Q_PROPERTY(QString mdiBrush READ mdiBrush CONSTANT)
    Q_PROPERTY(QString mdiBuffer READ mdiBuffer CONSTANT)
    Q_PROPERTY(QString mdiBug READ mdiBug CONSTANT)
    Q_PROPERTY(QString mdiBulletinBoard READ mdiBulletinBoard CONSTANT)
    Q_PROPERTY(QString mdiBullhorn READ mdiBullhorn CONSTANT)
    Q_PROPERTY(QString mdiBullseye READ mdiBullseye CONSTANT)
    Q_PROPERTY(QString mdiBurstMode READ mdiBurstMode CONSTANT)
    Q_PROPERTY(QString mdiBus READ mdiBus CONSTANT)
    Q_PROPERTY(QString mdiCached READ mdiCached CONSTANT)
    Q_PROPERTY(QString mdiCake READ mdiCake CONSTANT)
    Q_PROPERTY(QString mdiCakeLayered READ mdiCakeLayered CONSTANT)
    Q_PROPERTY(QString mdiCakeVariant READ mdiCakeVariant CONSTANT)
    Q_PROPERTY(QString mdiCalculator READ mdiCalculator CONSTANT)
    Q_PROPERTY(QString mdiCalendar READ mdiCalendar CONSTANT)
    Q_PROPERTY(QString mdiCalendarBlank READ mdiCalendarBlank CONSTANT)
    Q_PROPERTY(QString mdiCalendarCheck READ mdiCalendarCheck CONSTANT)
    Q_PROPERTY(QString mdiCalendarClock READ mdiCalendarClock CONSTANT)
    Q_PROPERTY(QString mdiCalendarMultiple READ mdiCalendarMultiple CONSTANT)
    Q_PROPERTY(QString mdiCalendarMultipleCheck READ mdiCalendarMultipleCheck CONSTANT)
    Q_PROPERTY(QString mdiCalendarPlus READ mdiCalendarPlus CONSTANT)
    Q_PROPERTY(QString mdiCalendarQuestion READ mdiCalendarQuestion CONSTANT)
    Q_PROPERTY(QString mdiCalendarRange READ mdiCalendarRange CONSTANT)
    Q_PROPERTY(QString mdiCalendarRemove READ mdiCalendarRemove CONSTANT)
    Q_PROPERTY(QString mdiCalendarText READ mdiCalendarText CONSTANT)
    Q_PROPERTY(QString mdiCalendarToday READ mdiCalendarToday CONSTANT)
    Q_PROPERTY(QString mdiCallMade READ mdiCallMade CONSTANT)
    Q_PROPERTY(QString mdiCallMerge READ mdiCallMerge CONSTANT)
    Q_PROPERTY(QString mdiCallMissed READ mdiCallMissed CONSTANT)
    Q_PROPERTY(QString mdiCallReceived READ mdiCallReceived CONSTANT)
    Q_PROPERTY(QString mdiCallSplit READ mdiCallSplit CONSTANT)
    Q_PROPERTY(QString mdiCamcorder READ mdiCamcorder CONSTANT)
    Q_PROPERTY(QString mdiCamcorderBox READ mdiCamcorderBox CONSTANT)
    Q_PROPERTY(QString mdiCamcorderBoxOff READ mdiCamcorderBoxOff CONSTANT)
    Q_PROPERTY(QString mdiCamcorderOff READ mdiCamcorderOff CONSTANT)
    Q_PROPERTY(QString mdiCamera READ mdiCamera CONSTANT)
    Q_PROPERTY(QString mdiCameraBurst READ mdiCameraBurst CONSTANT)
    Q_PROPERTY(QString mdiCameraEnhance READ mdiCameraEnhance CONSTANT)
    Q_PROPERTY(QString mdiCameraFront READ mdiCameraFront CONSTANT)
    Q_PROPERTY(QString mdiCameraFrontVariant READ mdiCameraFrontVariant CONSTANT)
    Q_PROPERTY(QString mdiCameraIris READ mdiCameraIris CONSTANT)
    Q_PROPERTY(QString mdiCameraOff READ mdiCameraOff CONSTANT)
    Q_PROPERTY(QString mdiCameraPartyMode READ mdiCameraPartyMode CONSTANT)
    Q_PROPERTY(QString mdiCameraRear READ mdiCameraRear CONSTANT)
    Q_PROPERTY(QString mdiCameraRearVariant READ mdiCameraRearVariant CONSTANT)
    Q_PROPERTY(QString mdiCameraSwitch READ mdiCameraSwitch CONSTANT)
    Q_PROPERTY(QString mdiCameraTimer READ mdiCameraTimer CONSTANT)
    Q_PROPERTY(QString mdiCandle READ mdiCandle CONSTANT)
    Q_PROPERTY(QString mdiCandycane READ mdiCandycane CONSTANT)
    Q_PROPERTY(QString mdiCar READ mdiCar CONSTANT)
    Q_PROPERTY(QString mdiCarBattery READ mdiCarBattery CONSTANT)
    Q_PROPERTY(QString mdiCarConnected READ mdiCarConnected CONSTANT)
    Q_PROPERTY(QString mdiCarWash READ mdiCarWash CONSTANT)
    Q_PROPERTY(QString mdiCards READ mdiCards CONSTANT)
    Q_PROPERTY(QString mdiCardsOutline READ mdiCardsOutline CONSTANT)
    Q_PROPERTY(QString mdiCardsPlayingOutline READ mdiCardsPlayingOutline CONSTANT)
    Q_PROPERTY(QString mdiCarrot READ mdiCarrot CONSTANT)
    Q_PROPERTY(QString mdiCart READ mdiCart CONSTANT)
    Q_PROPERTY(QString mdiCartOff READ mdiCartOff CONSTANT)
    Q_PROPERTY(QString mdiCartOutline READ mdiCartOutline CONSTANT)
    Q_PROPERTY(QString mdiCartPlus READ mdiCartPlus CONSTANT)
    Q_PROPERTY(QString mdiCaseSensitiveAlt READ mdiCaseSensitiveAlt CONSTANT)
    Q_PROPERTY(QString mdiCash READ mdiCash CONSTANT)
    Q_PROPERTY(QString mdiCash100 READ mdiCash100 CONSTANT)
    Q_PROPERTY(QString mdiCashMultiple READ mdiCashMultiple CONSTANT)
    Q_PROPERTY(QString mdiCashUsd READ mdiCashUsd CONSTANT)
    Q_PROPERTY(QString mdiCast READ mdiCast CONSTANT)
    Q_PROPERTY(QString mdiCastConnected READ mdiCastConnected CONSTANT)
    Q_PROPERTY(QString mdiCastle READ mdiCastle CONSTANT)
    Q_PROPERTY(QString mdiCat READ mdiCat CONSTANT)
    Q_PROPERTY(QString mdiCellphone READ mdiCellphone CONSTANT)
    Q_PROPERTY(QString mdiCellphoneAndroid READ mdiCellphoneAndroid CONSTANT)
    Q_PROPERTY(QString mdiCellphoneBasic READ mdiCellphoneBasic CONSTANT)
    Q_PROPERTY(QString mdiCellphoneDock READ mdiCellphoneDock CONSTANT)
    Q_PROPERTY(QString mdiCellphoneIphone READ mdiCellphoneIphone CONSTANT)
    Q_PROPERTY(QString mdiCellphoneLink READ mdiCellphoneLink CONSTANT)
    Q_PROPERTY(QString mdiCellphoneLinkOff READ mdiCellphoneLinkOff CONSTANT)
    Q_PROPERTY(QString mdiCellphoneSettings READ mdiCellphoneSettings CONSTANT)
    Q_PROPERTY(QString mdiCertificate READ mdiCertificate CONSTANT)
    Q_PROPERTY(QString mdiChairSchool READ mdiChairSchool CONSTANT)
    Q_PROPERTY(QString mdiChartArc READ mdiChartArc CONSTANT)
    Q_PROPERTY(QString mdiChartAreaspline READ mdiChartAreaspline CONSTANT)
    Q_PROPERTY(QString mdiChartBar READ mdiChartBar CONSTANT)
    Q_PROPERTY(QString mdiChartBubble READ mdiChartBubble CONSTANT)
    Q_PROPERTY(QString mdiChartGantt READ mdiChartGantt CONSTANT)
    Q_PROPERTY(QString mdiChartHistogram READ mdiChartHistogram CONSTANT)
    Q_PROPERTY(QString mdiChartLine READ mdiChartLine CONSTANT)
    Q_PROPERTY(QString mdiChartPie READ mdiChartPie CONSTANT)
    Q_PROPERTY(QString mdiChartScatterplotHexbin READ mdiChartScatterplotHexbin CONSTANT)
    Q_PROPERTY(QString mdiChartTimeline READ mdiChartTimeline CONSTANT)
    Q_PROPERTY(QString mdiCheck READ mdiCheck CONSTANT)
    Q_PROPERTY(QString mdiCheckAll READ mdiCheckAll CONSTANT)
    Q_PROPERTY(QString mdiCheckCircle READ mdiCheckCircle CONSTANT)
    Q_PROPERTY(QString mdiCheckCircleOutline READ mdiCheckCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckboxBlank READ mdiCheckboxBlank CONSTANT)
    Q_PROPERTY(QString mdiCheckboxBlankCircle READ mdiCheckboxBlankCircle CONSTANT)
    Q_PROPERTY(QString mdiCheckboxBlankCircleOutline READ mdiCheckboxBlankCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckboxBlankOutline READ mdiCheckboxBlankOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMarked READ mdiCheckboxMarked CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMarkedCircle READ mdiCheckboxMarkedCircle CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMarkedCircleOutline READ mdiCheckboxMarkedCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMarkedOutline READ mdiCheckboxMarkedOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMultipleBlank READ mdiCheckboxMultipleBlank CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMultipleBlankCircle READ mdiCheckboxMultipleBlankCircle CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMultipleBlankCircleOutline READ mdiCheckboxMultipleBlankCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMultipleBlankOutline READ mdiCheckboxMultipleBlankOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMultipleMarked READ mdiCheckboxMultipleMarked CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMultipleMarkedCircle READ mdiCheckboxMultipleMarkedCircle CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMultipleMarkedCircleOutline READ mdiCheckboxMultipleMarkedCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckboxMultipleMarkedOutline READ mdiCheckboxMultipleMarkedOutline CONSTANT)
    Q_PROPERTY(QString mdiCheckerboard READ mdiCheckerboard CONSTANT)
    Q_PROPERTY(QString mdiChemicalWeapon READ mdiChemicalWeapon CONSTANT)
    Q_PROPERTY(QString mdiChevronDoubleDown READ mdiChevronDoubleDown CONSTANT)
    Q_PROPERTY(QString mdiChevronDoubleLeft READ mdiChevronDoubleLeft CONSTANT)
    Q_PROPERTY(QString mdiChevronDoubleRight READ mdiChevronDoubleRight CONSTANT)
    Q_PROPERTY(QString mdiChevronDoubleUp READ mdiChevronDoubleUp CONSTANT)
    Q_PROPERTY(QString mdiChevronDown READ mdiChevronDown CONSTANT)
    Q_PROPERTY(QString mdiChevronLeft READ mdiChevronLeft CONSTANT)
    Q_PROPERTY(QString mdiChevronRight READ mdiChevronRight CONSTANT)
    Q_PROPERTY(QString mdiChevronUp READ mdiChevronUp CONSTANT)
    Q_PROPERTY(QString mdiChip READ mdiChip CONSTANT)
    Q_PROPERTY(QString mdiChurch READ mdiChurch CONSTANT)
    Q_PROPERTY(QString mdiCiscoWebex READ mdiCiscoWebex CONSTANT)
    Q_PROPERTY(QString mdiCity READ mdiCity CONSTANT)
    Q_PROPERTY(QString mdiClipboard READ mdiClipboard CONSTANT)
    Q_PROPERTY(QString mdiClipboardAccount READ mdiClipboardAccount CONSTANT)
    Q_PROPERTY(QString mdiClipboardAlert READ mdiClipboardAlert CONSTANT)
    Q_PROPERTY(QString mdiClipboardArrowDown READ mdiClipboardArrowDown CONSTANT)
    Q_PROPERTY(QString mdiClipboardArrowLeft READ mdiClipboardArrowLeft CONSTANT)
    Q_PROPERTY(QString mdiClipboardCheck READ mdiClipboardCheck CONSTANT)
    Q_PROPERTY(QString mdiClipboardOutline READ mdiClipboardOutline CONSTANT)
    Q_PROPERTY(QString mdiClipboardText READ mdiClipboardText CONSTANT)
    Q_PROPERTY(QString mdiClippy READ mdiClippy CONSTANT)
    Q_PROPERTY(QString mdiClock READ mdiClock CONSTANT)
    Q_PROPERTY(QString mdiClockAlert READ mdiClockAlert CONSTANT)
    Q_PROPERTY(QString mdiClockEnd READ mdiClockEnd CONSTANT)
    Q_PROPERTY(QString mdiClockFast READ mdiClockFast CONSTANT)
    Q_PROPERTY(QString mdiClockIn READ mdiClockIn CONSTANT)
    Q_PROPERTY(QString mdiClockOut READ mdiClockOut CONSTANT)
    Q_PROPERTY(QString mdiClockStart READ mdiClockStart CONSTANT)
    Q_PROPERTY(QString mdiClose READ mdiClose CONSTANT)
    Q_PROPERTY(QString mdiCloseBox READ mdiCloseBox CONSTANT)
    Q_PROPERTY(QString mdiCloseBoxOutline READ mdiCloseBoxOutline CONSTANT)
    Q_PROPERTY(QString mdiCloseCircle READ mdiCloseCircle CONSTANT)
    Q_PROPERTY(QString mdiCloseCircleOutline READ mdiCloseCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiCloseNetwork READ mdiCloseNetwork CONSTANT)
    Q_PROPERTY(QString mdiCloseOctagon READ mdiCloseOctagon CONSTANT)
    Q_PROPERTY(QString mdiCloseOctagonOutline READ mdiCloseOctagonOutline CONSTANT)
    Q_PROPERTY(QString mdiClosedCaption READ mdiClosedCaption CONSTANT)
    Q_PROPERTY(QString mdiCloud READ mdiCloud CONSTANT)
    Q_PROPERTY(QString mdiCloudCheck READ mdiCloudCheck CONSTANT)
    Q_PROPERTY(QString mdiCloudCircle READ mdiCloudCircle CONSTANT)
    Q_PROPERTY(QString mdiCloudDownload READ mdiCloudDownload CONSTANT)
    Q_PROPERTY(QString mdiCloudOutline READ mdiCloudOutline CONSTANT)
    Q_PROPERTY(QString mdiCloudOutlineOff READ mdiCloudOutlineOff CONSTANT)
    Q_PROPERTY(QString mdiCloudPrint READ mdiCloudPrint CONSTANT)
    Q_PROPERTY(QString mdiCloudPrintOutline READ mdiCloudPrintOutline CONSTANT)
    Q_PROPERTY(QString mdiCloudSync READ mdiCloudSync CONSTANT)
    Q_PROPERTY(QString mdiCloudUpload READ mdiCloudUpload CONSTANT)
    Q_PROPERTY(QString mdiCodeArray READ mdiCodeArray CONSTANT)
    Q_PROPERTY(QString mdiCodeBraces READ mdiCodeBraces CONSTANT)
    Q_PROPERTY(QString mdiCodeBrackets READ mdiCodeBrackets CONSTANT)
    Q_PROPERTY(QString mdiCodeEqual READ mdiCodeEqual CONSTANT)
    Q_PROPERTY(QString mdiCodeGreaterThan READ mdiCodeGreaterThan CONSTANT)
    Q_PROPERTY(QString mdiCodeGreaterThanOrEqual READ mdiCodeGreaterThanOrEqual CONSTANT)
    Q_PROPERTY(QString mdiCodeLessThan READ mdiCodeLessThan CONSTANT)
    Q_PROPERTY(QString mdiCodeLessThanOrEqual READ mdiCodeLessThanOrEqual CONSTANT)
    Q_PROPERTY(QString mdiCodeNotEqual READ mdiCodeNotEqual CONSTANT)
    Q_PROPERTY(QString mdiCodeNotEqualVariant READ mdiCodeNotEqualVariant CONSTANT)
    Q_PROPERTY(QString mdiCodeParentheses READ mdiCodeParentheses CONSTANT)
    Q_PROPERTY(QString mdiCodeString READ mdiCodeString CONSTANT)
    Q_PROPERTY(QString mdiCodeTags READ mdiCodeTags CONSTANT)
    Q_PROPERTY(QString mdiCodeTagsCheck READ mdiCodeTagsCheck CONSTANT)
    Q_PROPERTY(QString mdiCodepen READ mdiCodepen CONSTANT)
    Q_PROPERTY(QString mdiCoffee READ mdiCoffee CONSTANT)
    Q_PROPERTY(QString mdiCoffeeToGo READ mdiCoffeeToGo CONSTANT)
    Q_PROPERTY(QString mdiCoin READ mdiCoin CONSTANT)
    Q_PROPERTY(QString mdiCoins READ mdiCoins CONSTANT)
    Q_PROPERTY(QString mdiCollage READ mdiCollage CONSTANT)
    Q_PROPERTY(QString mdiColorHelper READ mdiColorHelper CONSTANT)
    Q_PROPERTY(QString mdiComment READ mdiComment CONSTANT)
    Q_PROPERTY(QString mdiCommentAccount READ mdiCommentAccount CONSTANT)
    Q_PROPERTY(QString mdiCommentAccountOutline READ mdiCommentAccountOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentAlert READ mdiCommentAlert CONSTANT)
    Q_PROPERTY(QString mdiCommentAlertOutline READ mdiCommentAlertOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentCheck READ mdiCommentCheck CONSTANT)
    Q_PROPERTY(QString mdiCommentCheckOutline READ mdiCommentCheckOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentMultipleOutline READ mdiCommentMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentOutline READ mdiCommentOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentPlusOutline READ mdiCommentPlusOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentProcessing READ mdiCommentProcessing CONSTANT)
    Q_PROPERTY(QString mdiCommentProcessingOutline READ mdiCommentProcessingOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentQuestionOutline READ mdiCommentQuestionOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentRemoveOutline READ mdiCommentRemoveOutline CONSTANT)
    Q_PROPERTY(QString mdiCommentText READ mdiCommentText CONSTANT)
    Q_PROPERTY(QString mdiCommentTextOutline READ mdiCommentTextOutline CONSTANT)
    Q_PROPERTY(QString mdiCompare READ mdiCompare CONSTANT)
    Q_PROPERTY(QString mdiCompass READ mdiCompass CONSTANT)
    Q_PROPERTY(QString mdiCompassOutline READ mdiCompassOutline CONSTANT)
    Q_PROPERTY(QString mdiConsole READ mdiConsole CONSTANT)
    Q_PROPERTY(QString mdiContactMail READ mdiContactMail CONSTANT)
    Q_PROPERTY(QString mdiContentCopy READ mdiContentCopy CONSTANT)
    Q_PROPERTY(QString mdiContentCut READ mdiContentCut CONSTANT)
    Q_PROPERTY(QString mdiContentDuplicate READ mdiContentDuplicate CONSTANT)
    Q_PROPERTY(QString mdiContentPaste READ mdiContentPaste CONSTANT)
    Q_PROPERTY(QString mdiContentSave READ mdiContentSave CONSTANT)
    Q_PROPERTY(QString mdiContentSaveAll READ mdiContentSaveAll CONSTANT)
    Q_PROPERTY(QString mdiContentSaveSettings READ mdiContentSaveSettings CONSTANT)
    Q_PROPERTY(QString mdiContrast READ mdiContrast CONSTANT)
    Q_PROPERTY(QString mdiContrastBox READ mdiContrastBox CONSTANT)
    Q_PROPERTY(QString mdiContrastCircle READ mdiContrastCircle CONSTANT)
    Q_PROPERTY(QString mdiCookie READ mdiCookie CONSTANT)
    Q_PROPERTY(QString mdiCopyright READ mdiCopyright CONSTANT)
    Q_PROPERTY(QString mdiCounter READ mdiCounter CONSTANT)
    Q_PROPERTY(QString mdiCow READ mdiCow CONSTANT)
    Q_PROPERTY(QString mdiCreation READ mdiCreation CONSTANT)
    Q_PROPERTY(QString mdiCreditCard READ mdiCreditCard CONSTANT)
    Q_PROPERTY(QString mdiCreditCardMultiple READ mdiCreditCardMultiple CONSTANT)
    Q_PROPERTY(QString mdiCreditCardOff READ mdiCreditCardOff CONSTANT)
    Q_PROPERTY(QString mdiCreditCardPlus READ mdiCreditCardPlus CONSTANT)
    Q_PROPERTY(QString mdiCreditCardScan READ mdiCreditCardScan CONSTANT)
    Q_PROPERTY(QString mdiCrop READ mdiCrop CONSTANT)
    Q_PROPERTY(QString mdiCropFree READ mdiCropFree CONSTANT)
    Q_PROPERTY(QString mdiCropLandscape READ mdiCropLandscape CONSTANT)
    Q_PROPERTY(QString mdiCropPortrait READ mdiCropPortrait CONSTANT)
    Q_PROPERTY(QString mdiCropRotate READ mdiCropRotate CONSTANT)
    Q_PROPERTY(QString mdiCropSquare READ mdiCropSquare CONSTANT)
    Q_PROPERTY(QString mdiCrosshairs READ mdiCrosshairs CONSTANT)
    Q_PROPERTY(QString mdiCrosshairsGps READ mdiCrosshairsGps CONSTANT)
    Q_PROPERTY(QString mdiCrown READ mdiCrown CONSTANT)
    Q_PROPERTY(QString mdiCube READ mdiCube CONSTANT)
    Q_PROPERTY(QString mdiCubeOutline READ mdiCubeOutline CONSTANT)
    Q_PROPERTY(QString mdiCubeSend READ mdiCubeSend CONSTANT)
    Q_PROPERTY(QString mdiCubeUnfolded READ mdiCubeUnfolded CONSTANT)
    Q_PROPERTY(QString mdiCup READ mdiCup CONSTANT)
    Q_PROPERTY(QString mdiCupOff READ mdiCupOff CONSTANT)
    Q_PROPERTY(QString mdiCupWater READ mdiCupWater CONSTANT)
    Q_PROPERTY(QString mdiCurrencyBtc READ mdiCurrencyBtc CONSTANT)
    Q_PROPERTY(QString mdiCurrencyEur READ mdiCurrencyEur CONSTANT)
    Q_PROPERTY(QString mdiCurrencyGbp READ mdiCurrencyGbp CONSTANT)
    Q_PROPERTY(QString mdiCurrencyInr READ mdiCurrencyInr CONSTANT)
    Q_PROPERTY(QString mdiCurrencyNgn READ mdiCurrencyNgn CONSTANT)
    Q_PROPERTY(QString mdiCurrencyRub READ mdiCurrencyRub CONSTANT)
    Q_PROPERTY(QString mdiCurrencyTry READ mdiCurrencyTry CONSTANT)
    Q_PROPERTY(QString mdiCurrencyUsd READ mdiCurrencyUsd CONSTANT)
    Q_PROPERTY(QString mdiCurrencyUsdOff READ mdiCurrencyUsdOff CONSTANT)
    Q_PROPERTY(QString mdiCursorDefault READ mdiCursorDefault CONSTANT)
    Q_PROPERTY(QString mdiCursorDefaultOutline READ mdiCursorDefaultOutline CONSTANT)
    Q_PROPERTY(QString mdiCursorMove READ mdiCursorMove CONSTANT)
    Q_PROPERTY(QString mdiCursorPointer READ mdiCursorPointer CONSTANT)
    Q_PROPERTY(QString mdiCursorText READ mdiCursorText CONSTANT)
    Q_PROPERTY(QString mdiDatabase READ mdiDatabase CONSTANT)
    Q_PROPERTY(QString mdiDatabaseMinus READ mdiDatabaseMinus CONSTANT)
    Q_PROPERTY(QString mdiDatabasePlus READ mdiDatabasePlus CONSTANT)
    Q_PROPERTY(QString mdiDebugStepInto READ mdiDebugStepInto CONSTANT)
    Q_PROPERTY(QString mdiDebugStepOut READ mdiDebugStepOut CONSTANT)
    Q_PROPERTY(QString mdiDebugStepOver READ mdiDebugStepOver CONSTANT)
    Q_PROPERTY(QString mdiDecimalDecrease READ mdiDecimalDecrease CONSTANT)
    Q_PROPERTY(QString mdiDecimalIncrease READ mdiDecimalIncrease CONSTANT)
    Q_PROPERTY(QString mdiDelete READ mdiDelete CONSTANT)
    Q_PROPERTY(QString mdiDeleteCircle READ mdiDeleteCircle CONSTANT)
    Q_PROPERTY(QString mdiDeleteForever READ mdiDeleteForever CONSTANT)
    Q_PROPERTY(QString mdiDeleteSweep READ mdiDeleteSweep CONSTANT)
    Q_PROPERTY(QString mdiDeleteVariant READ mdiDeleteVariant CONSTANT)
    Q_PROPERTY(QString mdiDelta READ mdiDelta CONSTANT)
    Q_PROPERTY(QString mdiDeskphone READ mdiDeskphone CONSTANT)
    Q_PROPERTY(QString mdiDesktopMac READ mdiDesktopMac CONSTANT)
    Q_PROPERTY(QString mdiDesktopTower READ mdiDesktopTower CONSTANT)
    Q_PROPERTY(QString mdiDetails READ mdiDetails CONSTANT)
    Q_PROPERTY(QString mdiDeveloperBoard READ mdiDeveloperBoard CONSTANT)
    Q_PROPERTY(QString mdiDeviantart READ mdiDeviantart CONSTANT)
    Q_PROPERTY(QString mdiDialpad READ mdiDialpad CONSTANT)
    Q_PROPERTY(QString mdiDiamond READ mdiDiamond CONSTANT)
    Q_PROPERTY(QString mdiDice1 READ mdiDice1 CONSTANT)
    Q_PROPERTY(QString mdiDice2 READ mdiDice2 CONSTANT)
    Q_PROPERTY(QString mdiDice3 READ mdiDice3 CONSTANT)
    Q_PROPERTY(QString mdiDice4 READ mdiDice4 CONSTANT)
    Q_PROPERTY(QString mdiDice5 READ mdiDice5 CONSTANT)
    Q_PROPERTY(QString mdiDice6 READ mdiDice6 CONSTANT)
    Q_PROPERTY(QString mdiDiceD20 READ mdiDiceD20 CONSTANT)
    Q_PROPERTY(QString mdiDiceD4 READ mdiDiceD4 CONSTANT)
    Q_PROPERTY(QString mdiDiceD6 READ mdiDiceD6 CONSTANT)
    Q_PROPERTY(QString mdiDiceD8 READ mdiDiceD8 CONSTANT)
    Q_PROPERTY(QString mdiDictionary READ mdiDictionary CONSTANT)
    Q_PROPERTY(QString mdiDirections READ mdiDirections CONSTANT)
    Q_PROPERTY(QString mdiDirectionsFork READ mdiDirectionsFork CONSTANT)
    Q_PROPERTY(QString mdiDiscord READ mdiDiscord CONSTANT)
    Q_PROPERTY(QString mdiDisk READ mdiDisk CONSTANT)
    Q_PROPERTY(QString mdiDiskAlert READ mdiDiskAlert CONSTANT)
    Q_PROPERTY(QString mdiDisqus READ mdiDisqus CONSTANT)
    Q_PROPERTY(QString mdiDisqusOutline READ mdiDisqusOutline CONSTANT)
    Q_PROPERTY(QString mdiDivision READ mdiDivision CONSTANT)
    Q_PROPERTY(QString mdiDivisionBox READ mdiDivisionBox CONSTANT)
    Q_PROPERTY(QString mdiDna READ mdiDna CONSTANT)
    Q_PROPERTY(QString mdiDns READ mdiDns CONSTANT)
    Q_PROPERTY(QString mdiDoNotDisturb READ mdiDoNotDisturb CONSTANT)
    Q_PROPERTY(QString mdiDoNotDisturbOff READ mdiDoNotDisturbOff CONSTANT)
    Q_PROPERTY(QString mdiDolby READ mdiDolby CONSTANT)
    Q_PROPERTY(QString mdiDomain READ mdiDomain CONSTANT)
    Q_PROPERTY(QString mdiDotsHorizontal READ mdiDotsHorizontal CONSTANT)
    Q_PROPERTY(QString mdiDotsVertical READ mdiDotsVertical CONSTANT)
    Q_PROPERTY(QString mdiDouban READ mdiDouban CONSTANT)
    Q_PROPERTY(QString mdiDownload READ mdiDownload CONSTANT)
    Q_PROPERTY(QString mdiDrag READ mdiDrag CONSTANT)
    Q_PROPERTY(QString mdiDragHorizontal READ mdiDragHorizontal CONSTANT)
    Q_PROPERTY(QString mdiDragVertical READ mdiDragVertical CONSTANT)
    Q_PROPERTY(QString mdiDrawing READ mdiDrawing CONSTANT)
    Q_PROPERTY(QString mdiDrawingBox READ mdiDrawingBox CONSTANT)
    Q_PROPERTY(QString mdiDribbble READ mdiDribbble CONSTANT)
    Q_PROPERTY(QString mdiDribbbleBox READ mdiDribbbleBox CONSTANT)
    Q_PROPERTY(QString mdiDrone READ mdiDrone CONSTANT)
    Q_PROPERTY(QString mdiDropbox READ mdiDropbox CONSTANT)
    Q_PROPERTY(QString mdiDrupal READ mdiDrupal CONSTANT)
    Q_PROPERTY(QString mdiDuck READ mdiDuck CONSTANT)
    Q_PROPERTY(QString mdiDumbbell READ mdiDumbbell CONSTANT)
    Q_PROPERTY(QString mdiEarth READ mdiEarth CONSTANT)
    Q_PROPERTY(QString mdiEarthOff READ mdiEarthOff CONSTANT)
    Q_PROPERTY(QString mdiEdge READ mdiEdge CONSTANT)
    Q_PROPERTY(QString mdiEject READ mdiEject CONSTANT)
    Q_PROPERTY(QString mdiElevationDecline READ mdiElevationDecline CONSTANT)
    Q_PROPERTY(QString mdiElevationRise READ mdiElevationRise CONSTANT)
    Q_PROPERTY(QString mdiElevator READ mdiElevator CONSTANT)
    Q_PROPERTY(QString mdiEmail READ mdiEmail CONSTANT)
    Q_PROPERTY(QString mdiEmailOpen READ mdiEmailOpen CONSTANT)
    Q_PROPERTY(QString mdiEmailOpenOutline READ mdiEmailOpenOutline CONSTANT)
    Q_PROPERTY(QString mdiEmailOutline READ mdiEmailOutline CONSTANT)
    Q_PROPERTY(QString mdiEmailSecure READ mdiEmailSecure CONSTANT)
    Q_PROPERTY(QString mdiEmailVariant READ mdiEmailVariant CONSTANT)
    Q_PROPERTY(QString mdiEmby READ mdiEmby CONSTANT)
    Q_PROPERTY(QString mdiEmoticon READ mdiEmoticon CONSTANT)
    Q_PROPERTY(QString mdiEmoticonCool READ mdiEmoticonCool CONSTANT)
    Q_PROPERTY(QString mdiEmoticonDead READ mdiEmoticonDead CONSTANT)
    Q_PROPERTY(QString mdiEmoticonDevil READ mdiEmoticonDevil CONSTANT)
    Q_PROPERTY(QString mdiEmoticonExcited READ mdiEmoticonExcited CONSTANT)
    Q_PROPERTY(QString mdiEmoticonHappy READ mdiEmoticonHappy CONSTANT)
    Q_PROPERTY(QString mdiEmoticonNeutral READ mdiEmoticonNeutral CONSTANT)
    Q_PROPERTY(QString mdiEmoticonPoop READ mdiEmoticonPoop CONSTANT)
    Q_PROPERTY(QString mdiEmoticonSad READ mdiEmoticonSad CONSTANT)
    Q_PROPERTY(QString mdiEmoticonTongue READ mdiEmoticonTongue CONSTANT)
    Q_PROPERTY(QString mdiEngine READ mdiEngine CONSTANT)
    Q_PROPERTY(QString mdiEngineOutline READ mdiEngineOutline CONSTANT)
    Q_PROPERTY(QString mdiEqual READ mdiEqual CONSTANT)
    Q_PROPERTY(QString mdiEqualBox READ mdiEqualBox CONSTANT)
    Q_PROPERTY(QString mdiEraser READ mdiEraser CONSTANT)
    Q_PROPERTY(QString mdiEraserVariant READ mdiEraserVariant CONSTANT)
    Q_PROPERTY(QString mdiEscalator READ mdiEscalator CONSTANT)
    Q_PROPERTY(QString mdiEthernet READ mdiEthernet CONSTANT)
    Q_PROPERTY(QString mdiEthernetCable READ mdiEthernetCable CONSTANT)
    Q_PROPERTY(QString mdiEthernetCableOff READ mdiEthernetCableOff CONSTANT)
    Q_PROPERTY(QString mdiEtsy READ mdiEtsy CONSTANT)
    Q_PROPERTY(QString mdiEvStation READ mdiEvStation CONSTANT)
    Q_PROPERTY(QString mdiEvernote READ mdiEvernote CONSTANT)
    Q_PROPERTY(QString mdiExclamation READ mdiExclamation CONSTANT)
    Q_PROPERTY(QString mdiExitToApp READ mdiExitToApp CONSTANT)
    Q_PROPERTY(QString mdiExport READ mdiExport CONSTANT)
    Q_PROPERTY(QString mdiEye READ mdiEye CONSTANT)
    Q_PROPERTY(QString mdiEyeOff READ mdiEyeOff CONSTANT)
    Q_PROPERTY(QString mdiEyedropper READ mdiEyedropper CONSTANT)
    Q_PROPERTY(QString mdiEyedropperVariant READ mdiEyedropperVariant CONSTANT)
    Q_PROPERTY(QString mdiFace READ mdiFace CONSTANT)
    Q_PROPERTY(QString mdiFaceProfile READ mdiFaceProfile CONSTANT)
    Q_PROPERTY(QString mdiFacebook READ mdiFacebook CONSTANT)
    Q_PROPERTY(QString mdiFacebookBox READ mdiFacebookBox CONSTANT)
    Q_PROPERTY(QString mdiFacebookMessenger READ mdiFacebookMessenger CONSTANT)
    Q_PROPERTY(QString mdiFactory READ mdiFactory CONSTANT)
    Q_PROPERTY(QString mdiFan READ mdiFan CONSTANT)
    Q_PROPERTY(QString mdiFastForward READ mdiFastForward CONSTANT)
    Q_PROPERTY(QString mdiFax READ mdiFax CONSTANT)
    Q_PROPERTY(QString mdiFerry READ mdiFerry CONSTANT)
    Q_PROPERTY(QString mdiFile READ mdiFile CONSTANT)
    Q_PROPERTY(QString mdiFileChart READ mdiFileChart CONSTANT)
    Q_PROPERTY(QString mdiFileCheck READ mdiFileCheck CONSTANT)
    Q_PROPERTY(QString mdiFileCloud READ mdiFileCloud CONSTANT)
    Q_PROPERTY(QString mdiFileDelimited READ mdiFileDelimited CONSTANT)
    Q_PROPERTY(QString mdiFileDocument READ mdiFileDocument CONSTANT)
    Q_PROPERTY(QString mdiFileDocumentBox READ mdiFileDocumentBox CONSTANT)
    Q_PROPERTY(QString mdiFileExcel READ mdiFileExcel CONSTANT)
    Q_PROPERTY(QString mdiFileExcelBox READ mdiFileExcelBox CONSTANT)
    Q_PROPERTY(QString mdiFileExport READ mdiFileExport CONSTANT)
    Q_PROPERTY(QString mdiFileFind READ mdiFileFind CONSTANT)
    Q_PROPERTY(QString mdiFileHidden READ mdiFileHidden CONSTANT)
    Q_PROPERTY(QString mdiFileImage READ mdiFileImage CONSTANT)
    Q_PROPERTY(QString mdiFileImport READ mdiFileImport CONSTANT)
    Q_PROPERTY(QString mdiFileLock READ mdiFileLock CONSTANT)
    Q_PROPERTY(QString mdiFileMultiple READ mdiFileMultiple CONSTANT)
    Q_PROPERTY(QString mdiFileMusic READ mdiFileMusic CONSTANT)
    Q_PROPERTY(QString mdiFileOutline READ mdiFileOutline CONSTANT)
    Q_PROPERTY(QString mdiFilePdf READ mdiFilePdf CONSTANT)
    Q_PROPERTY(QString mdiFilePdfBox READ mdiFilePdfBox CONSTANT)
    Q_PROPERTY(QString mdiFilePowerpoint READ mdiFilePowerpoint CONSTANT)
    Q_PROPERTY(QString mdiFilePowerpointBox READ mdiFilePowerpointBox CONSTANT)
    Q_PROPERTY(QString mdiFilePresentationBox READ mdiFilePresentationBox CONSTANT)
    Q_PROPERTY(QString mdiFileRestore READ mdiFileRestore CONSTANT)
    Q_PROPERTY(QString mdiFileSend READ mdiFileSend CONSTANT)
    Q_PROPERTY(QString mdiFileTree READ mdiFileTree CONSTANT)
    Q_PROPERTY(QString mdiFileVideo READ mdiFileVideo CONSTANT)
    Q_PROPERTY(QString mdiFileWord READ mdiFileWord CONSTANT)
    Q_PROPERTY(QString mdiFileWordBox READ mdiFileWordBox CONSTANT)
    Q_PROPERTY(QString mdiFileXml READ mdiFileXml CONSTANT)
    Q_PROPERTY(QString mdiFilm READ mdiFilm CONSTANT)
    Q_PROPERTY(QString mdiFilmstrip READ mdiFilmstrip CONSTANT)
    Q_PROPERTY(QString mdiFilmstripOff READ mdiFilmstripOff CONSTANT)
    Q_PROPERTY(QString mdiFilter READ mdiFilter CONSTANT)
    Q_PROPERTY(QString mdiFilterOutline READ mdiFilterOutline CONSTANT)
    Q_PROPERTY(QString mdiFilterRemove READ mdiFilterRemove CONSTANT)
    Q_PROPERTY(QString mdiFilterRemoveOutline READ mdiFilterRemoveOutline CONSTANT)
    Q_PROPERTY(QString mdiFilterVariant READ mdiFilterVariant CONSTANT)
    Q_PROPERTY(QString mdiFingerprint READ mdiFingerprint CONSTANT)
    Q_PROPERTY(QString mdiFire READ mdiFire CONSTANT)
    Q_PROPERTY(QString mdiFirefox READ mdiFirefox CONSTANT)
    Q_PROPERTY(QString mdiFish READ mdiFish CONSTANT)
    Q_PROPERTY(QString mdiFlag READ mdiFlag CONSTANT)
    Q_PROPERTY(QString mdiFlagCheckered READ mdiFlagCheckered CONSTANT)
    Q_PROPERTY(QString mdiFlagOutline READ mdiFlagOutline CONSTANT)
    Q_PROPERTY(QString mdiFlagOutlineVariant READ mdiFlagOutlineVariant CONSTANT)
    Q_PROPERTY(QString mdiFlagTriangle READ mdiFlagTriangle CONSTANT)
    Q_PROPERTY(QString mdiFlagVariant READ mdiFlagVariant CONSTANT)
    Q_PROPERTY(QString mdiFlash READ mdiFlash CONSTANT)
    Q_PROPERTY(QString mdiFlashAuto READ mdiFlashAuto CONSTANT)
    Q_PROPERTY(QString mdiFlashOff READ mdiFlashOff CONSTANT)
    Q_PROPERTY(QString mdiFlashRedEye READ mdiFlashRedEye CONSTANT)
    Q_PROPERTY(QString mdiFlashlight READ mdiFlashlight CONSTANT)
    Q_PROPERTY(QString mdiFlashlightOff READ mdiFlashlightOff CONSTANT)
    Q_PROPERTY(QString mdiFlask READ mdiFlask CONSTANT)
    Q_PROPERTY(QString mdiFlaskEmpty READ mdiFlaskEmpty CONSTANT)
    Q_PROPERTY(QString mdiFlaskEmptyOutline READ mdiFlaskEmptyOutline CONSTANT)
    Q_PROPERTY(QString mdiFlaskOutline READ mdiFlaskOutline CONSTANT)
    Q_PROPERTY(QString mdiFlattr READ mdiFlattr CONSTANT)
    Q_PROPERTY(QString mdiFlipToBack READ mdiFlipToBack CONSTANT)
    Q_PROPERTY(QString mdiFlipToFront READ mdiFlipToFront CONSTANT)
    Q_PROPERTY(QString mdiFloppy READ mdiFloppy CONSTANT)
    Q_PROPERTY(QString mdiFlower READ mdiFlower CONSTANT)
    Q_PROPERTY(QString mdiFolder READ mdiFolder CONSTANT)
    Q_PROPERTY(QString mdiFolderAccount READ mdiFolderAccount CONSTANT)
    Q_PROPERTY(QString mdiFolderDownload READ mdiFolderDownload CONSTANT)
    Q_PROPERTY(QString mdiFolderGoogleDrive READ mdiFolderGoogleDrive CONSTANT)
    Q_PROPERTY(QString mdiFolderImage READ mdiFolderImage CONSTANT)
    Q_PROPERTY(QString mdiFolderLock READ mdiFolderLock CONSTANT)
    Q_PROPERTY(QString mdiFolderLockOpen READ mdiFolderLockOpen CONSTANT)
    Q_PROPERTY(QString mdiFolderMove READ mdiFolderMove CONSTANT)
    Q_PROPERTY(QString mdiFolderMultiple READ mdiFolderMultiple CONSTANT)
    Q_PROPERTY(QString mdiFolderMultipleImage READ mdiFolderMultipleImage CONSTANT)
    Q_PROPERTY(QString mdiFolderMultipleOutline READ mdiFolderMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiFolderOutline READ mdiFolderOutline CONSTANT)
    Q_PROPERTY(QString mdiFolderPlus READ mdiFolderPlus CONSTANT)
    Q_PROPERTY(QString mdiFolderRemove READ mdiFolderRemove CONSTANT)
    Q_PROPERTY(QString mdiFolderStar READ mdiFolderStar CONSTANT)
    Q_PROPERTY(QString mdiFolderUpload READ mdiFolderUpload CONSTANT)
    Q_PROPERTY(QString mdiFood READ mdiFood CONSTANT)
    Q_PROPERTY(QString mdiFoodApple READ mdiFoodApple CONSTANT)
    Q_PROPERTY(QString mdiFoodForkDrink READ mdiFoodForkDrink CONSTANT)
    Q_PROPERTY(QString mdiFoodOff READ mdiFoodOff CONSTANT)
    Q_PROPERTY(QString mdiFoodVariant READ mdiFoodVariant CONSTANT)
    Q_PROPERTY(QString mdiFootball READ mdiFootball CONSTANT)
    Q_PROPERTY(QString mdiFootballAustralian READ mdiFootballAustralian CONSTANT)
    Q_PROPERTY(QString mdiFootballHelmet READ mdiFootballHelmet CONSTANT)
    Q_PROPERTY(QString mdiFormatAlignCenter READ mdiFormatAlignCenter CONSTANT)
    Q_PROPERTY(QString mdiFormatAlignJustify READ mdiFormatAlignJustify CONSTANT)
    Q_PROPERTY(QString mdiFormatAlignLeft READ mdiFormatAlignLeft CONSTANT)
    Q_PROPERTY(QString mdiFormatAlignRight READ mdiFormatAlignRight CONSTANT)
    Q_PROPERTY(QString mdiFormatAnnotationPlus READ mdiFormatAnnotationPlus CONSTANT)
    Q_PROPERTY(QString mdiFormatBold READ mdiFormatBold CONSTANT)
    Q_PROPERTY(QString mdiFormatClear READ mdiFormatClear CONSTANT)
    Q_PROPERTY(QString mdiFormatColorFill READ mdiFormatColorFill CONSTANT)
    Q_PROPERTY(QString mdiFormatColorText READ mdiFormatColorText CONSTANT)
    Q_PROPERTY(QString mdiFormatFloatCenter READ mdiFormatFloatCenter CONSTANT)
    Q_PROPERTY(QString mdiFormatFloatLeft READ mdiFormatFloatLeft CONSTANT)
    Q_PROPERTY(QString mdiFormatFloatNone READ mdiFormatFloatNone CONSTANT)
    Q_PROPERTY(QString mdiFormatFloatRight READ mdiFormatFloatRight CONSTANT)
    Q_PROPERTY(QString mdiFormatHeader1 READ mdiFormatHeader1 CONSTANT)
    Q_PROPERTY(QString mdiFormatHeader2 READ mdiFormatHeader2 CONSTANT)
    Q_PROPERTY(QString mdiFormatHeader3 READ mdiFormatHeader3 CONSTANT)
    Q_PROPERTY(QString mdiFormatHeader4 READ mdiFormatHeader4 CONSTANT)
    Q_PROPERTY(QString mdiFormatHeader5 READ mdiFormatHeader5 CONSTANT)
    Q_PROPERTY(QString mdiFormatHeader6 READ mdiFormatHeader6 CONSTANT)
    Q_PROPERTY(QString mdiFormatHeaderDecrease READ mdiFormatHeaderDecrease CONSTANT)
    Q_PROPERTY(QString mdiFormatHeaderEqual READ mdiFormatHeaderEqual CONSTANT)
    Q_PROPERTY(QString mdiFormatHeaderIncrease READ mdiFormatHeaderIncrease CONSTANT)
    Q_PROPERTY(QString mdiFormatHeaderPound READ mdiFormatHeaderPound CONSTANT)
    Q_PROPERTY(QString mdiFormatHorizontalAlignCenter READ mdiFormatHorizontalAlignCenter CONSTANT)
    Q_PROPERTY(QString mdiFormatHorizontalAlignLeft READ mdiFormatHorizontalAlignLeft CONSTANT)
    Q_PROPERTY(QString mdiFormatHorizontalAlignRight READ mdiFormatHorizontalAlignRight CONSTANT)
    Q_PROPERTY(QString mdiFormatIndentDecrease READ mdiFormatIndentDecrease CONSTANT)
    Q_PROPERTY(QString mdiFormatIndentIncrease READ mdiFormatIndentIncrease CONSTANT)
    Q_PROPERTY(QString mdiFormatItalic READ mdiFormatItalic CONSTANT)
    Q_PROPERTY(QString mdiFormatLineSpacing READ mdiFormatLineSpacing CONSTANT)
    Q_PROPERTY(QString mdiFormatLineStyle READ mdiFormatLineStyle CONSTANT)
    Q_PROPERTY(QString mdiFormatLineWeight READ mdiFormatLineWeight CONSTANT)
    Q_PROPERTY(QString mdiFormatListBulleted READ mdiFormatListBulleted CONSTANT)
    Q_PROPERTY(QString mdiFormatListBulletedType READ mdiFormatListBulletedType CONSTANT)
    Q_PROPERTY(QString mdiFormatListNumbers READ mdiFormatListNumbers CONSTANT)
    Q_PROPERTY(QString mdiFormatPaint READ mdiFormatPaint CONSTANT)
    Q_PROPERTY(QString mdiFormatParagraph READ mdiFormatParagraph CONSTANT)
    Q_PROPERTY(QString mdiFormatQuote READ mdiFormatQuote CONSTANT)
    Q_PROPERTY(QString mdiFormatSection READ mdiFormatSection CONSTANT)
    Q_PROPERTY(QString mdiFormatSize READ mdiFormatSize CONSTANT)
    Q_PROPERTY(QString mdiFormatStrikethrough READ mdiFormatStrikethrough CONSTANT)
    Q_PROPERTY(QString mdiFormatStrikethroughVariant READ mdiFormatStrikethroughVariant CONSTANT)
    Q_PROPERTY(QString mdiFormatSubscript READ mdiFormatSubscript CONSTANT)
    Q_PROPERTY(QString mdiFormatSuperscript READ mdiFormatSuperscript CONSTANT)
    Q_PROPERTY(QString mdiFormatText READ mdiFormatText CONSTANT)
    Q_PROPERTY(QString mdiFormatTextdirectionLToR READ mdiFormatTextdirectionLToR CONSTANT)
    Q_PROPERTY(QString mdiFormatTextdirectionRToL READ mdiFormatTextdirectionRToL CONSTANT)
    Q_PROPERTY(QString mdiFormatTitle READ mdiFormatTitle CONSTANT)
    Q_PROPERTY(QString mdiFormatUnderline READ mdiFormatUnderline CONSTANT)
    Q_PROPERTY(QString mdiFormatVerticalAlignBottom READ mdiFormatVerticalAlignBottom CONSTANT)
    Q_PROPERTY(QString mdiFormatVerticalAlignCenter READ mdiFormatVerticalAlignCenter CONSTANT)
    Q_PROPERTY(QString mdiFormatVerticalAlignTop READ mdiFormatVerticalAlignTop CONSTANT)
    Q_PROPERTY(QString mdiFormatWrapInline READ mdiFormatWrapInline CONSTANT)
    Q_PROPERTY(QString mdiFormatWrapSquare READ mdiFormatWrapSquare CONSTANT)
    Q_PROPERTY(QString mdiFormatWrapTight READ mdiFormatWrapTight CONSTANT)
    Q_PROPERTY(QString mdiFormatWrapTopBottom READ mdiFormatWrapTopBottom CONSTANT)
    Q_PROPERTY(QString mdiForum READ mdiForum CONSTANT)
    Q_PROPERTY(QString mdiForward READ mdiForward CONSTANT)
    Q_PROPERTY(QString mdiFoursquare READ mdiFoursquare CONSTANT)
    Q_PROPERTY(QString mdiFridge READ mdiFridge CONSTANT)
    Q_PROPERTY(QString mdiFridgeFilled READ mdiFridgeFilled CONSTANT)
    Q_PROPERTY(QString mdiFridgeFilledBottom READ mdiFridgeFilledBottom CONSTANT)
    Q_PROPERTY(QString mdiFridgeFilledTop READ mdiFridgeFilledTop CONSTANT)
    Q_PROPERTY(QString mdiFullscreen READ mdiFullscreen CONSTANT)
    Q_PROPERTY(QString mdiFullscreenExit READ mdiFullscreenExit CONSTANT)
    Q_PROPERTY(QString mdiFunction READ mdiFunction CONSTANT)
    Q_PROPERTY(QString mdiGamepad READ mdiGamepad CONSTANT)
    Q_PROPERTY(QString mdiGamepadVariant READ mdiGamepadVariant CONSTANT)
    Q_PROPERTY(QString mdiGasCylinder READ mdiGasCylinder CONSTANT)
    Q_PROPERTY(QString mdiGasStation READ mdiGasStation CONSTANT)
    Q_PROPERTY(QString mdiGate READ mdiGate CONSTANT)
    Q_PROPERTY(QString mdiGauge READ mdiGauge CONSTANT)
    Q_PROPERTY(QString mdiGavel READ mdiGavel CONSTANT)
    Q_PROPERTY(QString mdiGenderFemale READ mdiGenderFemale CONSTANT)
    Q_PROPERTY(QString mdiGenderMale READ mdiGenderMale CONSTANT)
    Q_PROPERTY(QString mdiGenderMaleFemale READ mdiGenderMaleFemale CONSTANT)
    Q_PROPERTY(QString mdiGenderTransgender READ mdiGenderTransgender CONSTANT)
    Q_PROPERTY(QString mdiGhost READ mdiGhost CONSTANT)
    Q_PROPERTY(QString mdiGift READ mdiGift CONSTANT)
    Q_PROPERTY(QString mdiGit READ mdiGit CONSTANT)
    Q_PROPERTY(QString mdiGithubBox READ mdiGithubBox CONSTANT)
    Q_PROPERTY(QString mdiGithubCircle READ mdiGithubCircle CONSTANT)
    Q_PROPERTY(QString mdiGlassFlute READ mdiGlassFlute CONSTANT)
    Q_PROPERTY(QString mdiGlassMug READ mdiGlassMug CONSTANT)
    Q_PROPERTY(QString mdiGlassStange READ mdiGlassStange CONSTANT)
    Q_PROPERTY(QString mdiGlassTulip READ mdiGlassTulip CONSTANT)
    Q_PROPERTY(QString mdiGlassdoor READ mdiGlassdoor CONSTANT)
    Q_PROPERTY(QString mdiGlasses READ mdiGlasses CONSTANT)
    Q_PROPERTY(QString mdiGmail READ mdiGmail CONSTANT)
    Q_PROPERTY(QString mdiGnome READ mdiGnome CONSTANT)
    Q_PROPERTY(QString mdiGondola READ mdiGondola CONSTANT)
    Q_PROPERTY(QString mdiGoogle READ mdiGoogle CONSTANT)
    Q_PROPERTY(QString mdiGoogleCardboard READ mdiGoogleCardboard CONSTANT)
    Q_PROPERTY(QString mdiGoogleChrome READ mdiGoogleChrome CONSTANT)
    Q_PROPERTY(QString mdiGoogleCircles READ mdiGoogleCircles CONSTANT)
    Q_PROPERTY(QString mdiGoogleCirclesCommunities READ mdiGoogleCirclesCommunities CONSTANT)
    Q_PROPERTY(QString mdiGoogleCirclesExtended READ mdiGoogleCirclesExtended CONSTANT)
    Q_PROPERTY(QString mdiGoogleCirclesGroup READ mdiGoogleCirclesGroup CONSTANT)
    Q_PROPERTY(QString mdiGoogleController READ mdiGoogleController CONSTANT)
    Q_PROPERTY(QString mdiGoogleControllerOff READ mdiGoogleControllerOff CONSTANT)
    Q_PROPERTY(QString mdiGoogleDrive READ mdiGoogleDrive CONSTANT)
    Q_PROPERTY(QString mdiGoogleEarth READ mdiGoogleEarth CONSTANT)
    Q_PROPERTY(QString mdiGoogleGlass READ mdiGoogleGlass CONSTANT)
    Q_PROPERTY(QString mdiGoogleMaps READ mdiGoogleMaps CONSTANT)
    Q_PROPERTY(QString mdiGoogleNearby READ mdiGoogleNearby CONSTANT)
    Q_PROPERTY(QString mdiGooglePages READ mdiGooglePages CONSTANT)
    Q_PROPERTY(QString mdiGooglePhysicalWeb READ mdiGooglePhysicalWeb CONSTANT)
    Q_PROPERTY(QString mdiGooglePlay READ mdiGooglePlay CONSTANT)
    Q_PROPERTY(QString mdiGooglePlus READ mdiGooglePlus CONSTANT)
    Q_PROPERTY(QString mdiGooglePlusBox READ mdiGooglePlusBox CONSTANT)
    Q_PROPERTY(QString mdiGoogleTranslate READ mdiGoogleTranslate CONSTANT)
    Q_PROPERTY(QString mdiGoogleWallet READ mdiGoogleWallet CONSTANT)
    Q_PROPERTY(QString mdiGradient READ mdiGradient CONSTANT)
    Q_PROPERTY(QString mdiGreasePencil READ mdiGreasePencil CONSTANT)
    Q_PROPERTY(QString mdiGrid READ mdiGrid CONSTANT)
    Q_PROPERTY(QString mdiGridOff READ mdiGridOff CONSTANT)
    Q_PROPERTY(QString mdiGroup READ mdiGroup CONSTANT)
    Q_PROPERTY(QString mdiGuitarElectric READ mdiGuitarElectric CONSTANT)
    Q_PROPERTY(QString mdiGuitarPick READ mdiGuitarPick CONSTANT)
    Q_PROPERTY(QString mdiGuitarPickOutline READ mdiGuitarPickOutline CONSTANT)
    Q_PROPERTY(QString mdiHackernews READ mdiHackernews CONSTANT)
    Q_PROPERTY(QString mdiHamburger READ mdiHamburger CONSTANT)
    Q_PROPERTY(QString mdiHandPointingRight READ mdiHandPointingRight CONSTANT)
    Q_PROPERTY(QString mdiHanger READ mdiHanger CONSTANT)
    Q_PROPERTY(QString mdiHangouts READ mdiHangouts CONSTANT)
    Q_PROPERTY(QString mdiHarddisk READ mdiHarddisk CONSTANT)
    Q_PROPERTY(QString mdiHeadphones READ mdiHeadphones CONSTANT)
    Q_PROPERTY(QString mdiHeadphonesBox READ mdiHeadphonesBox CONSTANT)
    Q_PROPERTY(QString mdiHeadphonesSettings READ mdiHeadphonesSettings CONSTANT)
    Q_PROPERTY(QString mdiHeadset READ mdiHeadset CONSTANT)
    Q_PROPERTY(QString mdiHeadsetDock READ mdiHeadsetDock CONSTANT)
    Q_PROPERTY(QString mdiHeadsetOff READ mdiHeadsetOff CONSTANT)
    Q_PROPERTY(QString mdiHeart READ mdiHeart CONSTANT)
    Q_PROPERTY(QString mdiHeartBox READ mdiHeartBox CONSTANT)
    Q_PROPERTY(QString mdiHeartBoxOutline READ mdiHeartBoxOutline CONSTANT)
    Q_PROPERTY(QString mdiHeartBroken READ mdiHeartBroken CONSTANT)
    Q_PROPERTY(QString mdiHeartOutline READ mdiHeartOutline CONSTANT)
    Q_PROPERTY(QString mdiHeartPulse READ mdiHeartPulse CONSTANT)
    Q_PROPERTY(QString mdiHelp READ mdiHelp CONSTANT)
    Q_PROPERTY(QString mdiHelpCircle READ mdiHelpCircle CONSTANT)
    Q_PROPERTY(QString mdiHelpCircleOutline READ mdiHelpCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiHexagon READ mdiHexagon CONSTANT)
    Q_PROPERTY(QString mdiHexagonOutline READ mdiHexagonOutline CONSTANT)
    Q_PROPERTY(QString mdiHighway READ mdiHighway CONSTANT)
    Q_PROPERTY(QString mdiHistory READ mdiHistory CONSTANT)
    Q_PROPERTY(QString mdiHololens READ mdiHololens CONSTANT)
    Q_PROPERTY(QString mdiHome READ mdiHome CONSTANT)
    Q_PROPERTY(QString mdiHomeMapMarker READ mdiHomeMapMarker CONSTANT)
    Q_PROPERTY(QString mdiHomeModern READ mdiHomeModern CONSTANT)
    Q_PROPERTY(QString mdiHomeOutline READ mdiHomeOutline CONSTANT)
    Q_PROPERTY(QString mdiHomeVariant READ mdiHomeVariant CONSTANT)
    Q_PROPERTY(QString mdiHops READ mdiHops CONSTANT)
    Q_PROPERTY(QString mdiHospital READ mdiHospital CONSTANT)
    Q_PROPERTY(QString mdiHospitalBuilding READ mdiHospitalBuilding CONSTANT)
    Q_PROPERTY(QString mdiHospitalMarker READ mdiHospitalMarker CONSTANT)
    Q_PROPERTY(QString mdiHotel READ mdiHotel CONSTANT)
    Q_PROPERTY(QString mdiHouzz READ mdiHouzz CONSTANT)
    Q_PROPERTY(QString mdiHouzzBox READ mdiHouzzBox CONSTANT)
    Q_PROPERTY(QString mdiHuman READ mdiHuman CONSTANT)
    Q_PROPERTY(QString mdiHumanChild READ mdiHumanChild CONSTANT)
    Q_PROPERTY(QString mdiHumanFemale READ mdiHumanFemale CONSTANT)
    Q_PROPERTY(QString mdiHumanGreeting READ mdiHumanGreeting CONSTANT)
    Q_PROPERTY(QString mdiHumanHandsdown READ mdiHumanHandsdown CONSTANT)
    Q_PROPERTY(QString mdiHumanHandsup READ mdiHumanHandsup CONSTANT)
    Q_PROPERTY(QString mdiHumanMale READ mdiHumanMale CONSTANT)
    Q_PROPERTY(QString mdiHumanMaleFemale READ mdiHumanMaleFemale CONSTANT)
    Q_PROPERTY(QString mdiHumanPregnant READ mdiHumanPregnant CONSTANT)
    Q_PROPERTY(QString mdiImage READ mdiImage CONSTANT)
    Q_PROPERTY(QString mdiImageAlbum READ mdiImageAlbum CONSTANT)
    Q_PROPERTY(QString mdiImageArea READ mdiImageArea CONSTANT)
    Q_PROPERTY(QString mdiImageAreaClose READ mdiImageAreaClose CONSTANT)
    Q_PROPERTY(QString mdiImageBroken READ mdiImageBroken CONSTANT)
    Q_PROPERTY(QString mdiImageBrokenVariant READ mdiImageBrokenVariant CONSTANT)
    Q_PROPERTY(QString mdiImageFilter READ mdiImageFilter CONSTANT)
    Q_PROPERTY(QString mdiImageFilterBlackWhite READ mdiImageFilterBlackWhite CONSTANT)
    Q_PROPERTY(QString mdiImageFilterCenterFocus READ mdiImageFilterCenterFocus CONSTANT)
    Q_PROPERTY(QString mdiImageFilterCenterFocusWeak READ mdiImageFilterCenterFocusWeak CONSTANT)
    Q_PROPERTY(QString mdiImageFilterDrama READ mdiImageFilterDrama CONSTANT)
    Q_PROPERTY(QString mdiImageFilterFrames READ mdiImageFilterFrames CONSTANT)
    Q_PROPERTY(QString mdiImageFilterHdr READ mdiImageFilterHdr CONSTANT)
    Q_PROPERTY(QString mdiImageFilterNone READ mdiImageFilterNone CONSTANT)
    Q_PROPERTY(QString mdiImageFilterTiltShift READ mdiImageFilterTiltShift CONSTANT)
    Q_PROPERTY(QString mdiImageFilterVintage READ mdiImageFilterVintage CONSTANT)
    Q_PROPERTY(QString mdiImageMultiple READ mdiImageMultiple CONSTANT)
    Q_PROPERTY(QString mdiImport READ mdiImport CONSTANT)
    Q_PROPERTY(QString mdiInbox READ mdiInbox CONSTANT)
    Q_PROPERTY(QString mdiInboxArrowDown READ mdiInboxArrowDown CONSTANT)
    Q_PROPERTY(QString mdiInboxArrowUp READ mdiInboxArrowUp CONSTANT)
    Q_PROPERTY(QString mdiIncognito READ mdiIncognito CONSTANT)
    Q_PROPERTY(QString mdiInformation READ mdiInformation CONSTANT)
    Q_PROPERTY(QString mdiInformationOutline READ mdiInformationOutline CONSTANT)
    Q_PROPERTY(QString mdiInformationVariant READ mdiInformationVariant CONSTANT)
    Q_PROPERTY(QString mdiInstagram READ mdiInstagram CONSTANT)
    Q_PROPERTY(QString mdiInstapaper READ mdiInstapaper CONSTANT)
    Q_PROPERTY(QString mdiInternetExplorer READ mdiInternetExplorer CONSTANT)
    Q_PROPERTY(QString mdiInvertColors READ mdiInvertColors CONSTANT)
    Q_PROPERTY(QString mdiItunes READ mdiItunes CONSTANT)
    Q_PROPERTY(QString mdiJeepney READ mdiJeepney CONSTANT)
    Q_PROPERTY(QString mdiJira READ mdiJira CONSTANT)
    Q_PROPERTY(QString mdiJsfiddle READ mdiJsfiddle CONSTANT)
    Q_PROPERTY(QString mdiJson READ mdiJson CONSTANT)
    Q_PROPERTY(QString mdiKeg READ mdiKeg CONSTANT)
    Q_PROPERTY(QString mdiKettle READ mdiKettle CONSTANT)
    Q_PROPERTY(QString mdiKey READ mdiKey CONSTANT)
    Q_PROPERTY(QString mdiKeyChange READ mdiKeyChange CONSTANT)
    Q_PROPERTY(QString mdiKeyMinus READ mdiKeyMinus CONSTANT)
    Q_PROPERTY(QString mdiKeyPlus READ mdiKeyPlus CONSTANT)
    Q_PROPERTY(QString mdiKeyRemove READ mdiKeyRemove CONSTANT)
    Q_PROPERTY(QString mdiKeyVariant READ mdiKeyVariant CONSTANT)
    Q_PROPERTY(QString mdiKeyboard READ mdiKeyboard CONSTANT)
    Q_PROPERTY(QString mdiKeyboardBackspace READ mdiKeyboardBackspace CONSTANT)
    Q_PROPERTY(QString mdiKeyboardCaps READ mdiKeyboardCaps CONSTANT)
    Q_PROPERTY(QString mdiKeyboardClose READ mdiKeyboardClose CONSTANT)
    Q_PROPERTY(QString mdiKeyboardOff READ mdiKeyboardOff CONSTANT)
    Q_PROPERTY(QString mdiKeyboardReturn READ mdiKeyboardReturn CONSTANT)
    Q_PROPERTY(QString mdiKeyboardTab READ mdiKeyboardTab CONSTANT)
    Q_PROPERTY(QString mdiKeyboardVariant READ mdiKeyboardVariant CONSTANT)
    Q_PROPERTY(QString mdiKodi READ mdiKodi CONSTANT)
    Q_PROPERTY(QString mdiLabel READ mdiLabel CONSTANT)
    Q_PROPERTY(QString mdiLabelOutline READ mdiLabelOutline CONSTANT)
    Q_PROPERTY(QString mdiLambda READ mdiLambda CONSTANT)
    Q_PROPERTY(QString mdiLamp READ mdiLamp CONSTANT)
    Q_PROPERTY(QString mdiLan READ mdiLan CONSTANT)
    Q_PROPERTY(QString mdiLanConnect READ mdiLanConnect CONSTANT)
    Q_PROPERTY(QString mdiLanDisconnect READ mdiLanDisconnect CONSTANT)
    Q_PROPERTY(QString mdiLanPending READ mdiLanPending CONSTANT)
    Q_PROPERTY(QString mdiLanguageC READ mdiLanguageC CONSTANT)
    Q_PROPERTY(QString mdiLanguageCpp READ mdiLanguageCpp CONSTANT)
    Q_PROPERTY(QString mdiLanguageCsharp READ mdiLanguageCsharp CONSTANT)
    Q_PROPERTY(QString mdiLanguageCss3 READ mdiLanguageCss3 CONSTANT)
    Q_PROPERTY(QString mdiLanguageHtml5 READ mdiLanguageHtml5 CONSTANT)
    Q_PROPERTY(QString mdiLanguageJavascript READ mdiLanguageJavascript CONSTANT)
    Q_PROPERTY(QString mdiLanguagePhp READ mdiLanguagePhp CONSTANT)
    Q_PROPERTY(QString mdiLanguagePython READ mdiLanguagePython CONSTANT)
    Q_PROPERTY(QString mdiLanguagePythonText READ mdiLanguagePythonText CONSTANT)
    Q_PROPERTY(QString mdiLaptop READ mdiLaptop CONSTANT)
    Q_PROPERTY(QString mdiLaptopChromebook READ mdiLaptopChromebook CONSTANT)
    Q_PROPERTY(QString mdiLaptopMac READ mdiLaptopMac CONSTANT)
    Q_PROPERTY(QString mdiLaptopWindows READ mdiLaptopWindows CONSTANT)
    Q_PROPERTY(QString mdiLastfm READ mdiLastfm CONSTANT)
    Q_PROPERTY(QString mdiLaunch READ mdiLaunch CONSTANT)
    Q_PROPERTY(QString mdiLayers READ mdiLayers CONSTANT)
    Q_PROPERTY(QString mdiLayersOff READ mdiLayersOff CONSTANT)
    Q_PROPERTY(QString mdiLeadPencil READ mdiLeadPencil CONSTANT)
    Q_PROPERTY(QString mdiLeaf READ mdiLeaf CONSTANT)
    Q_PROPERTY(QString mdiLedOff READ mdiLedOff CONSTANT)
    Q_PROPERTY(QString mdiLedOn READ mdiLedOn CONSTANT)
    Q_PROPERTY(QString mdiLedOutline READ mdiLedOutline CONSTANT)
    Q_PROPERTY(QString mdiLedVariantOff READ mdiLedVariantOff CONSTANT)
    Q_PROPERTY(QString mdiLedVariantOn READ mdiLedVariantOn CONSTANT)
    Q_PROPERTY(QString mdiLedVariantOutline READ mdiLedVariantOutline CONSTANT)
    Q_PROPERTY(QString mdiLibrary READ mdiLibrary CONSTANT)
    Q_PROPERTY(QString mdiLibraryBooks READ mdiLibraryBooks CONSTANT)
    Q_PROPERTY(QString mdiLibraryMusic READ mdiLibraryMusic CONSTANT)
    Q_PROPERTY(QString mdiLibraryPlus READ mdiLibraryPlus CONSTANT)
    Q_PROPERTY(QString mdiLightbulb READ mdiLightbulb CONSTANT)
    Q_PROPERTY(QString mdiLightbulbOutline READ mdiLightbulbOutline CONSTANT)
    Q_PROPERTY(QString mdiLink READ mdiLink CONSTANT)
    Q_PROPERTY(QString mdiLinkOff READ mdiLinkOff CONSTANT)
    Q_PROPERTY(QString mdiLinkVariant READ mdiLinkVariant CONSTANT)
    Q_PROPERTY(QString mdiLinkVariantOff READ mdiLinkVariantOff CONSTANT)
    Q_PROPERTY(QString mdiLinkedin READ mdiLinkedin CONSTANT)
    Q_PROPERTY(QString mdiLinkedinBox READ mdiLinkedinBox CONSTANT)
    Q_PROPERTY(QString mdiLinux READ mdiLinux CONSTANT)
    Q_PROPERTY(QString mdiLock READ mdiLock CONSTANT)
    Q_PROPERTY(QString mdiLockOpen READ mdiLockOpen CONSTANT)
    Q_PROPERTY(QString mdiLockOpenOutline READ mdiLockOpenOutline CONSTANT)
    Q_PROPERTY(QString mdiLockOutline READ mdiLockOutline CONSTANT)
    Q_PROPERTY(QString mdiLockPlus READ mdiLockPlus CONSTANT)
    Q_PROPERTY(QString mdiLogin READ mdiLogin CONSTANT)
    Q_PROPERTY(QString mdiLoginVariant READ mdiLoginVariant CONSTANT)
    Q_PROPERTY(QString mdiLogout READ mdiLogout CONSTANT)
    Q_PROPERTY(QString mdiLogoutVariant READ mdiLogoutVariant CONSTANT)
    Q_PROPERTY(QString mdiLooks READ mdiLooks CONSTANT)
    Q_PROPERTY(QString mdiLoupe READ mdiLoupe CONSTANT)
    Q_PROPERTY(QString mdiLumx READ mdiLumx CONSTANT)
    Q_PROPERTY(QString mdiMagnet READ mdiMagnet CONSTANT)
    Q_PROPERTY(QString mdiMagnetOn READ mdiMagnetOn CONSTANT)
    Q_PROPERTY(QString mdiMagnify READ mdiMagnify CONSTANT)
    Q_PROPERTY(QString mdiMagnifyMinus READ mdiMagnifyMinus CONSTANT)
    Q_PROPERTY(QString mdiMagnifyPlus READ mdiMagnifyPlus CONSTANT)
    Q_PROPERTY(QString mdiMailRu READ mdiMailRu CONSTANT)
    Q_PROPERTY(QString mdiMap READ mdiMap CONSTANT)
    Q_PROPERTY(QString mdiMapMarker READ mdiMapMarker CONSTANT)
    Q_PROPERTY(QString mdiMapMarkerCircle READ mdiMapMarkerCircle CONSTANT)
    Q_PROPERTY(QString mdiMapMarkerMinus READ mdiMapMarkerMinus CONSTANT)
    Q_PROPERTY(QString mdiMapMarkerMultiple READ mdiMapMarkerMultiple CONSTANT)
    Q_PROPERTY(QString mdiMapMarkerOff READ mdiMapMarkerOff CONSTANT)
    Q_PROPERTY(QString mdiMapMarkerPlus READ mdiMapMarkerPlus CONSTANT)
    Q_PROPERTY(QString mdiMapMarkerRadius READ mdiMapMarkerRadius CONSTANT)
    Q_PROPERTY(QString mdiMargin READ mdiMargin CONSTANT)
    Q_PROPERTY(QString mdiMarkdown READ mdiMarkdown CONSTANT)
    Q_PROPERTY(QString mdiMarker READ mdiMarker CONSTANT)
    Q_PROPERTY(QString mdiMarkerCheck READ mdiMarkerCheck CONSTANT)
    Q_PROPERTY(QString mdiMartini READ mdiMartini CONSTANT)
    Q_PROPERTY(QString mdiMaterialUi READ mdiMaterialUi CONSTANT)
    Q_PROPERTY(QString mdiMathCompass READ mdiMathCompass CONSTANT)
    Q_PROPERTY(QString mdiMatrix READ mdiMatrix CONSTANT)
    Q_PROPERTY(QString mdiMaxcdn READ mdiMaxcdn CONSTANT)
    Q_PROPERTY(QString mdiMedium READ mdiMedium CONSTANT)
    Q_PROPERTY(QString mdiMemory READ mdiMemory CONSTANT)
    Q_PROPERTY(QString mdiMenu READ mdiMenu CONSTANT)
    Q_PROPERTY(QString mdiMenuDown READ mdiMenuDown CONSTANT)
    Q_PROPERTY(QString mdiMenuDownOutline READ mdiMenuDownOutline CONSTANT)
    Q_PROPERTY(QString mdiMenuLeft READ mdiMenuLeft CONSTANT)
    Q_PROPERTY(QString mdiMenuRight READ mdiMenuRight CONSTANT)
    Q_PROPERTY(QString mdiMenuUp READ mdiMenuUp CONSTANT)
    Q_PROPERTY(QString mdiMenuUpOutline READ mdiMenuUpOutline CONSTANT)
    Q_PROPERTY(QString mdiMessage READ mdiMessage CONSTANT)
    Q_PROPERTY(QString mdiMessageAlert READ mdiMessageAlert CONSTANT)
    Q_PROPERTY(QString mdiMessageBulleted READ mdiMessageBulleted CONSTANT)
    Q_PROPERTY(QString mdiMessageBulletedOff READ mdiMessageBulletedOff CONSTANT)
    Q_PROPERTY(QString mdiMessageDraw READ mdiMessageDraw CONSTANT)
    Q_PROPERTY(QString mdiMessageImage READ mdiMessageImage CONSTANT)
    Q_PROPERTY(QString mdiMessageOutline READ mdiMessageOutline CONSTANT)
    Q_PROPERTY(QString mdiMessagePlus READ mdiMessagePlus CONSTANT)
    Q_PROPERTY(QString mdiMessageProcessing READ mdiMessageProcessing CONSTANT)
    Q_PROPERTY(QString mdiMessageReply READ mdiMessageReply CONSTANT)
    Q_PROPERTY(QString mdiMessageReplyText READ mdiMessageReplyText CONSTANT)
    Q_PROPERTY(QString mdiMessageText READ mdiMessageText CONSTANT)
    Q_PROPERTY(QString mdiMessageTextOutline READ mdiMessageTextOutline CONSTANT)
    Q_PROPERTY(QString mdiMessageVideo READ mdiMessageVideo CONSTANT)
    Q_PROPERTY(QString mdiMeteor READ mdiMeteor CONSTANT)
    Q_PROPERTY(QString mdiMicrophone READ mdiMicrophone CONSTANT)
    Q_PROPERTY(QString mdiMicrophoneOff READ mdiMicrophoneOff CONSTANT)
    Q_PROPERTY(QString mdiMicrophoneOutline READ mdiMicrophoneOutline CONSTANT)
    Q_PROPERTY(QString mdiMicrophoneSettings READ mdiMicrophoneSettings CONSTANT)
    Q_PROPERTY(QString mdiMicrophoneVariant READ mdiMicrophoneVariant CONSTANT)
    Q_PROPERTY(QString mdiMicrophoneVariantOff READ mdiMicrophoneVariantOff CONSTANT)
    Q_PROPERTY(QString mdiMicroscope READ mdiMicroscope CONSTANT)
    Q_PROPERTY(QString mdiMicrosoft READ mdiMicrosoft CONSTANT)
    Q_PROPERTY(QString mdiMinecraft READ mdiMinecraft CONSTANT)
    Q_PROPERTY(QString mdiMinus READ mdiMinus CONSTANT)
    Q_PROPERTY(QString mdiMinusBox READ mdiMinusBox CONSTANT)
    Q_PROPERTY(QString mdiMinusCircle READ mdiMinusCircle CONSTANT)
    Q_PROPERTY(QString mdiMinusCircleOutline READ mdiMinusCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiMinusNetwork READ mdiMinusNetwork CONSTANT)
    Q_PROPERTY(QString mdiMixcloud READ mdiMixcloud CONSTANT)
    Q_PROPERTY(QString mdiMonitor READ mdiMonitor CONSTANT)
    Q_PROPERTY(QString mdiMonitorMultiple READ mdiMonitorMultiple CONSTANT)
    Q_PROPERTY(QString mdiMore READ mdiMore CONSTANT)
    Q_PROPERTY(QString mdiMotorbike READ mdiMotorbike CONSTANT)
    Q_PROPERTY(QString mdiMouse READ mdiMouse CONSTANT)
    Q_PROPERTY(QString mdiMouseOff READ mdiMouseOff CONSTANT)
    Q_PROPERTY(QString mdiMouseVariant READ mdiMouseVariant CONSTANT)
    Q_PROPERTY(QString mdiMouseVariantOff READ mdiMouseVariantOff CONSTANT)
    Q_PROPERTY(QString mdiMoveResize READ mdiMoveResize CONSTANT)
    Q_PROPERTY(QString mdiMoveResizeVariant READ mdiMoveResizeVariant CONSTANT)
    Q_PROPERTY(QString mdiMovie READ mdiMovie CONSTANT)
    Q_PROPERTY(QString mdiMultiplication READ mdiMultiplication CONSTANT)
    Q_PROPERTY(QString mdiMultiplicationBox READ mdiMultiplicationBox CONSTANT)
    Q_PROPERTY(QString mdiMusicBox READ mdiMusicBox CONSTANT)
    Q_PROPERTY(QString mdiMusicBoxOutline READ mdiMusicBoxOutline CONSTANT)
    Q_PROPERTY(QString mdiMusicCircle READ mdiMusicCircle CONSTANT)
    Q_PROPERTY(QString mdiMusicNote READ mdiMusicNote CONSTANT)
    Q_PROPERTY(QString mdiMusicNoteBluetooth READ mdiMusicNoteBluetooth CONSTANT)
    Q_PROPERTY(QString mdiMusicNoteBluetoothOff READ mdiMusicNoteBluetoothOff CONSTANT)
    Q_PROPERTY(QString mdiMusicNoteEighth READ mdiMusicNoteEighth CONSTANT)
    Q_PROPERTY(QString mdiMusicNoteHalf READ mdiMusicNoteHalf CONSTANT)
    Q_PROPERTY(QString mdiMusicNoteOff READ mdiMusicNoteOff CONSTANT)
    Q_PROPERTY(QString mdiMusicNoteQuarter READ mdiMusicNoteQuarter CONSTANT)
    Q_PROPERTY(QString mdiMusicNoteSixteenth READ mdiMusicNoteSixteenth CONSTANT)
    Q_PROPERTY(QString mdiMusicNoteWhole READ mdiMusicNoteWhole CONSTANT)
    Q_PROPERTY(QString mdiNature READ mdiNature CONSTANT)
    Q_PROPERTY(QString mdiNaturePeople READ mdiNaturePeople CONSTANT)
    Q_PROPERTY(QString mdiNavigation READ mdiNavigation CONSTANT)
    Q_PROPERTY(QString mdiNearMe READ mdiNearMe CONSTANT)
    Q_PROPERTY(QString mdiNeedle READ mdiNeedle CONSTANT)
    Q_PROPERTY(QString mdiNestProtect READ mdiNestProtect CONSTANT)
    Q_PROPERTY(QString mdiNestThermostat READ mdiNestThermostat CONSTANT)
    Q_PROPERTY(QString mdiNewBox READ mdiNewBox CONSTANT)
    Q_PROPERTY(QString mdiNewspaper READ mdiNewspaper CONSTANT)
    Q_PROPERTY(QString mdiNfc READ mdiNfc CONSTANT)
    Q_PROPERTY(QString mdiNfcTap READ mdiNfcTap CONSTANT)
    Q_PROPERTY(QString mdiNfcVariant READ mdiNfcVariant CONSTANT)
    Q_PROPERTY(QString mdiNodejs READ mdiNodejs CONSTANT)
    Q_PROPERTY(QString mdiNote READ mdiNote CONSTANT)
    Q_PROPERTY(QString mdiNoteMultiple READ mdiNoteMultiple CONSTANT)
    Q_PROPERTY(QString mdiNoteMultipleOutline READ mdiNoteMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNoteOutline READ mdiNoteOutline CONSTANT)
    Q_PROPERTY(QString mdiNotePlus READ mdiNotePlus CONSTANT)
    Q_PROPERTY(QString mdiNotePlusOutline READ mdiNotePlusOutline CONSTANT)
    Q_PROPERTY(QString mdiNoteText READ mdiNoteText CONSTANT)
    Q_PROPERTY(QString mdiNotificationClearAll READ mdiNotificationClearAll CONSTANT)
    Q_PROPERTY(QString mdiNuke READ mdiNuke CONSTANT)
    Q_PROPERTY(QString mdiNumeric READ mdiNumeric CONSTANT)
    Q_PROPERTY(QString mdiNumeric0Box READ mdiNumeric0Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric0BoxMultipleOutline READ mdiNumeric0BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric0BoxOutline READ mdiNumeric0BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric1Box READ mdiNumeric1Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric1BoxMultipleOutline READ mdiNumeric1BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric1BoxOutline READ mdiNumeric1BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric2Box READ mdiNumeric2Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric2BoxMultipleOutline READ mdiNumeric2BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric2BoxOutline READ mdiNumeric2BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric3Box READ mdiNumeric3Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric3BoxMultipleOutline READ mdiNumeric3BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric3BoxOutline READ mdiNumeric3BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric4Box READ mdiNumeric4Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric4BoxMultipleOutline READ mdiNumeric4BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric4BoxOutline READ mdiNumeric4BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric5Box READ mdiNumeric5Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric5BoxMultipleOutline READ mdiNumeric5BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric5BoxOutline READ mdiNumeric5BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric6Box READ mdiNumeric6Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric6BoxMultipleOutline READ mdiNumeric6BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric6BoxOutline READ mdiNumeric6BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric7Box READ mdiNumeric7Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric7BoxMultipleOutline READ mdiNumeric7BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric7BoxOutline READ mdiNumeric7BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric8Box READ mdiNumeric8Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric8BoxMultipleOutline READ mdiNumeric8BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric8BoxOutline READ mdiNumeric8BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric9Box READ mdiNumeric9Box CONSTANT)
    Q_PROPERTY(QString mdiNumeric9BoxMultipleOutline READ mdiNumeric9BoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric9BoxOutline READ mdiNumeric9BoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric9PlusBox READ mdiNumeric9PlusBox CONSTANT)
    Q_PROPERTY(QString mdiNumeric9PlusBoxMultipleOutline READ mdiNumeric9PlusBoxMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiNumeric9PlusBoxOutline READ mdiNumeric9PlusBoxOutline CONSTANT)
    Q_PROPERTY(QString mdiNutrition READ mdiNutrition CONSTANT)
    Q_PROPERTY(QString mdiOar READ mdiOar CONSTANT)
    Q_PROPERTY(QString mdiOctagon READ mdiOctagon CONSTANT)
    Q_PROPERTY(QString mdiOctagonOutline READ mdiOctagonOutline CONSTANT)
    Q_PROPERTY(QString mdiOdnoklassniki READ mdiOdnoklassniki CONSTANT)
    Q_PROPERTY(QString mdiOffice READ mdiOffice CONSTANT)
    Q_PROPERTY(QString mdiOil READ mdiOil CONSTANT)
    Q_PROPERTY(QString mdiOilTemperature READ mdiOilTemperature CONSTANT)
    Q_PROPERTY(QString mdiOmega READ mdiOmega CONSTANT)
    Q_PROPERTY(QString mdiOnedrive READ mdiOnedrive CONSTANT)
    Q_PROPERTY(QString mdiOpacity READ mdiOpacity CONSTANT)
    Q_PROPERTY(QString mdiOpenInApp READ mdiOpenInApp CONSTANT)
    Q_PROPERTY(QString mdiOpenInNew READ mdiOpenInNew CONSTANT)
    Q_PROPERTY(QString mdiOpenid READ mdiOpenid CONSTANT)
    Q_PROPERTY(QString mdiOpera READ mdiOpera CONSTANT)
    Q_PROPERTY(QString mdiOrnament READ mdiOrnament CONSTANT)
    Q_PROPERTY(QString mdiOrnamentVariant READ mdiOrnamentVariant CONSTANT)
    Q_PROPERTY(QString mdiOwl READ mdiOwl CONSTANT)
    Q_PROPERTY(QString mdiPackage READ mdiPackage CONSTANT)
    Q_PROPERTY(QString mdiPackageDown READ mdiPackageDown CONSTANT)
    Q_PROPERTY(QString mdiPackageUp READ mdiPackageUp CONSTANT)
    Q_PROPERTY(QString mdiPackageVariant READ mdiPackageVariant CONSTANT)
    Q_PROPERTY(QString mdiPackageVariantClosed READ mdiPackageVariantClosed CONSTANT)
    Q_PROPERTY(QString mdiPageFirst READ mdiPageFirst CONSTANT)
    Q_PROPERTY(QString mdiPageLast READ mdiPageLast CONSTANT)
    Q_PROPERTY(QString mdiPalette READ mdiPalette CONSTANT)
    Q_PROPERTY(QString mdiPaletteAdvanced READ mdiPaletteAdvanced CONSTANT)
    Q_PROPERTY(QString mdiPanda READ mdiPanda CONSTANT)
    Q_PROPERTY(QString mdiPandora READ mdiPandora CONSTANT)
    Q_PROPERTY(QString mdiPanorama READ mdiPanorama CONSTANT)
    Q_PROPERTY(QString mdiPanoramaFisheye READ mdiPanoramaFisheye CONSTANT)
    Q_PROPERTY(QString mdiPanoramaHorizontal READ mdiPanoramaHorizontal CONSTANT)
    Q_PROPERTY(QString mdiPanoramaVertical READ mdiPanoramaVertical CONSTANT)
    Q_PROPERTY(QString mdiPanoramaWideAngle READ mdiPanoramaWideAngle CONSTANT)
    Q_PROPERTY(QString mdiPaperCutVertical READ mdiPaperCutVertical CONSTANT)
    Q_PROPERTY(QString mdiPaperclip READ mdiPaperclip CONSTANT)
    Q_PROPERTY(QString mdiParking READ mdiParking CONSTANT)
    Q_PROPERTY(QString mdiPause READ mdiPause CONSTANT)
    Q_PROPERTY(QString mdiPauseCircle READ mdiPauseCircle CONSTANT)
    Q_PROPERTY(QString mdiPauseCircleOutline READ mdiPauseCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiPauseOctagon READ mdiPauseOctagon CONSTANT)
    Q_PROPERTY(QString mdiPauseOctagonOutline READ mdiPauseOctagonOutline CONSTANT)
    Q_PROPERTY(QString mdiPaw READ mdiPaw CONSTANT)
    Q_PROPERTY(QString mdiPawOff READ mdiPawOff CONSTANT)
    Q_PROPERTY(QString mdiPen READ mdiPen CONSTANT)
    Q_PROPERTY(QString mdiPencil READ mdiPencil CONSTANT)
    Q_PROPERTY(QString mdiPencilBox READ mdiPencilBox CONSTANT)
    Q_PROPERTY(QString mdiPencilBoxOutline READ mdiPencilBoxOutline CONSTANT)
    Q_PROPERTY(QString mdiPencilLock READ mdiPencilLock CONSTANT)
    Q_PROPERTY(QString mdiPencilOff READ mdiPencilOff CONSTANT)
    Q_PROPERTY(QString mdiPercent READ mdiPercent CONSTANT)
    Q_PROPERTY(QString mdiPharmacy READ mdiPharmacy CONSTANT)
    Q_PROPERTY(QString mdiPhone READ mdiPhone CONSTANT)
    Q_PROPERTY(QString mdiPhoneBluetooth READ mdiPhoneBluetooth CONSTANT)
    Q_PROPERTY(QString mdiPhoneClassic READ mdiPhoneClassic CONSTANT)
    Q_PROPERTY(QString mdiPhoneForward READ mdiPhoneForward CONSTANT)
    Q_PROPERTY(QString mdiPhoneHangup READ mdiPhoneHangup CONSTANT)
    Q_PROPERTY(QString mdiPhoneInTalk READ mdiPhoneInTalk CONSTANT)
    Q_PROPERTY(QString mdiPhoneIncoming READ mdiPhoneIncoming CONSTANT)
    Q_PROPERTY(QString mdiPhoneLocked READ mdiPhoneLocked CONSTANT)
    Q_PROPERTY(QString mdiPhoneLog READ mdiPhoneLog CONSTANT)
    Q_PROPERTY(QString mdiPhoneMinus READ mdiPhoneMinus CONSTANT)
    Q_PROPERTY(QString mdiPhoneMissed READ mdiPhoneMissed CONSTANT)
    Q_PROPERTY(QString mdiPhoneOutgoing READ mdiPhoneOutgoing CONSTANT)
    Q_PROPERTY(QString mdiPhonePaused READ mdiPhonePaused CONSTANT)
    Q_PROPERTY(QString mdiPhonePlus READ mdiPhonePlus CONSTANT)
    Q_PROPERTY(QString mdiPhoneSettings READ mdiPhoneSettings CONSTANT)
    Q_PROPERTY(QString mdiPhoneVoip READ mdiPhoneVoip CONSTANT)
    Q_PROPERTY(QString mdiPi READ mdiPi CONSTANT)
    Q_PROPERTY(QString mdiPiBox READ mdiPiBox CONSTANT)
    Q_PROPERTY(QString mdiPiano READ mdiPiano CONSTANT)
    Q_PROPERTY(QString mdiPig READ mdiPig CONSTANT)
    Q_PROPERTY(QString mdiPill READ mdiPill CONSTANT)
    Q_PROPERTY(QString mdiPin READ mdiPin CONSTANT)
    Q_PROPERTY(QString mdiPinOff READ mdiPinOff CONSTANT)
    Q_PROPERTY(QString mdiPineTree READ mdiPineTree CONSTANT)
    Q_PROPERTY(QString mdiPineTreeBox READ mdiPineTreeBox CONSTANT)
    Q_PROPERTY(QString mdiPinterest READ mdiPinterest CONSTANT)
    Q_PROPERTY(QString mdiPinterestBox READ mdiPinterestBox CONSTANT)
    Q_PROPERTY(QString mdiPizza READ mdiPizza CONSTANT)
    Q_PROPERTY(QString mdiPlaneShield READ mdiPlaneShield CONSTANT)
    Q_PROPERTY(QString mdiPlay READ mdiPlay CONSTANT)
    Q_PROPERTY(QString mdiPlayBoxOutline READ mdiPlayBoxOutline CONSTANT)
    Q_PROPERTY(QString mdiPlayCircle READ mdiPlayCircle CONSTANT)
    Q_PROPERTY(QString mdiPlayCircleOutline READ mdiPlayCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiPlayPause READ mdiPlayPause CONSTANT)
    Q_PROPERTY(QString mdiPlayProtectedContent READ mdiPlayProtectedContent CONSTANT)
    Q_PROPERTY(QString mdiPlaylistCheck READ mdiPlaylistCheck CONSTANT)
    Q_PROPERTY(QString mdiPlaylistMinus READ mdiPlaylistMinus CONSTANT)
    Q_PROPERTY(QString mdiPlaylistPlay READ mdiPlaylistPlay CONSTANT)
    Q_PROPERTY(QString mdiPlaylistPlus READ mdiPlaylistPlus CONSTANT)
    Q_PROPERTY(QString mdiPlaylistRemove READ mdiPlaylistRemove CONSTANT)
    Q_PROPERTY(QString mdiPlaystation READ mdiPlaystation CONSTANT)
    Q_PROPERTY(QString mdiPlex READ mdiPlex CONSTANT)
    Q_PROPERTY(QString mdiPlus READ mdiPlus CONSTANT)
    Q_PROPERTY(QString mdiPlusBox READ mdiPlusBox CONSTANT)
    Q_PROPERTY(QString mdiPlusCircle READ mdiPlusCircle CONSTANT)
    Q_PROPERTY(QString mdiPlusCircleMultipleOutline READ mdiPlusCircleMultipleOutline CONSTANT)
    Q_PROPERTY(QString mdiPlusCircleOutline READ mdiPlusCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiPlusNetwork READ mdiPlusNetwork CONSTANT)
    Q_PROPERTY(QString mdiPlusOne READ mdiPlusOne CONSTANT)
    Q_PROPERTY(QString mdiPocket READ mdiPocket CONSTANT)
    Q_PROPERTY(QString mdiPokeball READ mdiPokeball CONSTANT)
    Q_PROPERTY(QString mdiPolaroid READ mdiPolaroid CONSTANT)
    Q_PROPERTY(QString mdiPoll READ mdiPoll CONSTANT)
    Q_PROPERTY(QString mdiPollBox READ mdiPollBox CONSTANT)
    Q_PROPERTY(QString mdiPolymer READ mdiPolymer CONSTANT)
    Q_PROPERTY(QString mdiPool READ mdiPool CONSTANT)
    Q_PROPERTY(QString mdiPopcorn READ mdiPopcorn CONSTANT)
    Q_PROPERTY(QString mdiPot READ mdiPot CONSTANT)
    Q_PROPERTY(QString mdiPotMix READ mdiPotMix CONSTANT)
    Q_PROPERTY(QString mdiPound READ mdiPound CONSTANT)
    Q_PROPERTY(QString mdiPoundBox READ mdiPoundBox CONSTANT)
    Q_PROPERTY(QString mdiPower READ mdiPower CONSTANT)
    Q_PROPERTY(QString mdiPowerPlug READ mdiPowerPlug CONSTANT)
    Q_PROPERTY(QString mdiPowerPlugOff READ mdiPowerPlugOff CONSTANT)
    Q_PROPERTY(QString mdiPowerSettings READ mdiPowerSettings CONSTANT)
    Q_PROPERTY(QString mdiPowerSocket READ mdiPowerSocket CONSTANT)
    Q_PROPERTY(QString mdiPresentation READ mdiPresentation CONSTANT)
    Q_PROPERTY(QString mdiPresentationPlay READ mdiPresentationPlay CONSTANT)
    Q_PROPERTY(QString mdiPrinter READ mdiPrinter CONSTANT)
    Q_PROPERTY(QString mdiPrinter3d READ mdiPrinter3d CONSTANT)
    Q_PROPERTY(QString mdiPrinterAlert READ mdiPrinterAlert CONSTANT)
    Q_PROPERTY(QString mdiPriorityHigh READ mdiPriorityHigh CONSTANT)
    Q_PROPERTY(QString mdiPriorityLow READ mdiPriorityLow CONSTANT)
    Q_PROPERTY(QString mdiProfessionalHexagon READ mdiProfessionalHexagon CONSTANT)
    Q_PROPERTY(QString mdiProjector READ mdiProjector CONSTANT)
    Q_PROPERTY(QString mdiProjectorScreen READ mdiProjectorScreen CONSTANT)
    Q_PROPERTY(QString mdiPublish READ mdiPublish CONSTANT)
    Q_PROPERTY(QString mdiPulse READ mdiPulse CONSTANT)
    Q_PROPERTY(QString mdiPuzzle READ mdiPuzzle CONSTANT)
    Q_PROPERTY(QString mdiQqchat READ mdiQqchat CONSTANT)
    Q_PROPERTY(QString mdiQrcode READ mdiQrcode CONSTANT)
    Q_PROPERTY(QString mdiQrcodeScan READ mdiQrcodeScan CONSTANT)
    Q_PROPERTY(QString mdiQuadcopter READ mdiQuadcopter CONSTANT)
    Q_PROPERTY(QString mdiQualityHigh READ mdiQualityHigh CONSTANT)
    Q_PROPERTY(QString mdiQuicktime READ mdiQuicktime CONSTANT)
    Q_PROPERTY(QString mdiRadar READ mdiRadar CONSTANT)
    Q_PROPERTY(QString mdiRadiator READ mdiRadiator CONSTANT)
    Q_PROPERTY(QString mdiRadio READ mdiRadio CONSTANT)
    Q_PROPERTY(QString mdiRadioHandheld READ mdiRadioHandheld CONSTANT)
    Q_PROPERTY(QString mdiRadioTower READ mdiRadioTower CONSTANT)
    Q_PROPERTY(QString mdiRadioactive READ mdiRadioactive CONSTANT)
    Q_PROPERTY(QString mdiRadioboxBlank READ mdiRadioboxBlank CONSTANT)
    Q_PROPERTY(QString mdiRadioboxMarked READ mdiRadioboxMarked CONSTANT)
    Q_PROPERTY(QString mdiRaspberrypi READ mdiRaspberrypi CONSTANT)
    Q_PROPERTY(QString mdiRayEnd READ mdiRayEnd CONSTANT)
    Q_PROPERTY(QString mdiRayEndArrow READ mdiRayEndArrow CONSTANT)
    Q_PROPERTY(QString mdiRayStart READ mdiRayStart CONSTANT)
    Q_PROPERTY(QString mdiRayStartArrow READ mdiRayStartArrow CONSTANT)
    Q_PROPERTY(QString mdiRayStartEnd READ mdiRayStartEnd CONSTANT)
    Q_PROPERTY(QString mdiRayVertex READ mdiRayVertex CONSTANT)
    Q_PROPERTY(QString mdiRdio READ mdiRdio CONSTANT)
    Q_PROPERTY(QString mdiRead READ mdiRead CONSTANT)
    Q_PROPERTY(QString mdiReadability READ mdiReadability CONSTANT)
    Q_PROPERTY(QString mdiReceipt READ mdiReceipt CONSTANT)
    Q_PROPERTY(QString mdiRecord READ mdiRecord CONSTANT)
    Q_PROPERTY(QString mdiRecordRec READ mdiRecordRec CONSTANT)
    Q_PROPERTY(QString mdiRecycle READ mdiRecycle CONSTANT)
    Q_PROPERTY(QString mdiReddit READ mdiReddit CONSTANT)
    Q_PROPERTY(QString mdiRedo READ mdiRedo CONSTANT)
    Q_PROPERTY(QString mdiRedoVariant READ mdiRedoVariant CONSTANT)
    Q_PROPERTY(QString mdiRefresh READ mdiRefresh CONSTANT)
    Q_PROPERTY(QString mdiRegex READ mdiRegex CONSTANT)
    Q_PROPERTY(QString mdiRelativeScale READ mdiRelativeScale CONSTANT)
    Q_PROPERTY(QString mdiReload READ mdiReload CONSTANT)
    Q_PROPERTY(QString mdiRemote READ mdiRemote CONSTANT)
    Q_PROPERTY(QString mdiRenameBox READ mdiRenameBox CONSTANT)
    Q_PROPERTY(QString mdiReorderHorizontal READ mdiReorderHorizontal CONSTANT)
    Q_PROPERTY(QString mdiReorderVertical READ mdiReorderVertical CONSTANT)
    Q_PROPERTY(QString mdiRepeat READ mdiRepeat CONSTANT)
    Q_PROPERTY(QString mdiRepeatOff READ mdiRepeatOff CONSTANT)
    Q_PROPERTY(QString mdiRepeatOnce READ mdiRepeatOnce CONSTANT)
    Q_PROPERTY(QString mdiReplay READ mdiReplay CONSTANT)
    Q_PROPERTY(QString mdiReply READ mdiReply CONSTANT)
    Q_PROPERTY(QString mdiReplyAll READ mdiReplyAll CONSTANT)
    Q_PROPERTY(QString mdiReproduction READ mdiReproduction CONSTANT)
    Q_PROPERTY(QString mdiResizeBottomRight READ mdiResizeBottomRight CONSTANT)
    Q_PROPERTY(QString mdiResponsive READ mdiResponsive CONSTANT)
    Q_PROPERTY(QString mdiRestore READ mdiRestore CONSTANT)
    Q_PROPERTY(QString mdiRewind READ mdiRewind CONSTANT)
    Q_PROPERTY(QString mdiRibbon READ mdiRibbon CONSTANT)
    Q_PROPERTY(QString mdiRoad READ mdiRoad CONSTANT)
    Q_PROPERTY(QString mdiRoadVariant READ mdiRoadVariant CONSTANT)
    Q_PROPERTY(QString mdiRobot READ mdiRobot CONSTANT)
    Q_PROPERTY(QString mdiRocket READ mdiRocket CONSTANT)
    Q_PROPERTY(QString mdiRotate3d READ mdiRotate3d CONSTANT)
    Q_PROPERTY(QString mdiRotate90 READ mdiRotate90 CONSTANT)
    Q_PROPERTY(QString mdiRotateLeft READ mdiRotateLeft CONSTANT)
    Q_PROPERTY(QString mdiRotateLeftVariant READ mdiRotateLeftVariant CONSTANT)
    Q_PROPERTY(QString mdiRotateRight READ mdiRotateRight CONSTANT)
    Q_PROPERTY(QString mdiRotateRightVariant READ mdiRotateRightVariant CONSTANT)
    Q_PROPERTY(QString mdiRoundedCorner READ mdiRoundedCorner CONSTANT)
    Q_PROPERTY(QString mdiRouterWireless READ mdiRouterWireless CONSTANT)
    Q_PROPERTY(QString mdiRoutes READ mdiRoutes CONSTANT)
    Q_PROPERTY(QString mdiRowing READ mdiRowing CONSTANT)
    Q_PROPERTY(QString mdiRss READ mdiRss CONSTANT)
    Q_PROPERTY(QString mdiRssBox READ mdiRssBox CONSTANT)
    Q_PROPERTY(QString mdiRuler READ mdiRuler CONSTANT)
    Q_PROPERTY(QString mdiRun READ mdiRun CONSTANT)
    Q_PROPERTY(QString mdiSale READ mdiSale CONSTANT)
    Q_PROPERTY(QString mdiSatellite READ mdiSatellite CONSTANT)
    Q_PROPERTY(QString mdiSatelliteVariant READ mdiSatelliteVariant CONSTANT)
    Q_PROPERTY(QString mdiSaxophone READ mdiSaxophone CONSTANT)
    Q_PROPERTY(QString mdiScale READ mdiScale CONSTANT)
    Q_PROPERTY(QString mdiScaleBalance READ mdiScaleBalance CONSTANT)
    Q_PROPERTY(QString mdiScaleBathroom READ mdiScaleBathroom CONSTANT)
    Q_PROPERTY(QString mdiScanner READ mdiScanner CONSTANT)
    Q_PROPERTY(QString mdiSchool READ mdiSchool CONSTANT)
    Q_PROPERTY(QString mdiScreenRotation READ mdiScreenRotation CONSTANT)
    Q_PROPERTY(QString mdiScreenRotationLock READ mdiScreenRotationLock CONSTANT)
    Q_PROPERTY(QString mdiScrewdriver READ mdiScrewdriver CONSTANT)
    Q_PROPERTY(QString mdiScript READ mdiScript CONSTANT)
    Q_PROPERTY(QString mdiSd READ mdiSd CONSTANT)
    Q_PROPERTY(QString mdiSeal READ mdiSeal CONSTANT)
    Q_PROPERTY(QString mdiSeatFlat READ mdiSeatFlat CONSTANT)
    Q_PROPERTY(QString mdiSeatFlatAngled READ mdiSeatFlatAngled CONSTANT)
    Q_PROPERTY(QString mdiSeatIndividualSuite READ mdiSeatIndividualSuite CONSTANT)
    Q_PROPERTY(QString mdiSeatLegroomExtra READ mdiSeatLegroomExtra CONSTANT)
    Q_PROPERTY(QString mdiSeatLegroomNormal READ mdiSeatLegroomNormal CONSTANT)
    Q_PROPERTY(QString mdiSeatLegroomReduced READ mdiSeatLegroomReduced CONSTANT)
    Q_PROPERTY(QString mdiSeatReclineExtra READ mdiSeatReclineExtra CONSTANT)
    Q_PROPERTY(QString mdiSeatReclineNormal READ mdiSeatReclineNormal CONSTANT)
    Q_PROPERTY(QString mdiSecurity READ mdiSecurity CONSTANT)
    Q_PROPERTY(QString mdiSecurityHome READ mdiSecurityHome CONSTANT)
    Q_PROPERTY(QString mdiSecurityNetwork READ mdiSecurityNetwork CONSTANT)
    Q_PROPERTY(QString mdiSelect READ mdiSelect CONSTANT)
    Q_PROPERTY(QString mdiSelectAll READ mdiSelectAll CONSTANT)
    Q_PROPERTY(QString mdiSelectInverse READ mdiSelectInverse CONSTANT)
    Q_PROPERTY(QString mdiSelectOff READ mdiSelectOff CONSTANT)
    Q_PROPERTY(QString mdiSelection READ mdiSelection CONSTANT)
    Q_PROPERTY(QString mdiSend READ mdiSend CONSTANT)
    Q_PROPERTY(QString mdiSerialPort READ mdiSerialPort CONSTANT)
    Q_PROPERTY(QString mdiServer READ mdiServer CONSTANT)
    Q_PROPERTY(QString mdiServerMinus READ mdiServerMinus CONSTANT)
    Q_PROPERTY(QString mdiServerNetwork READ mdiServerNetwork CONSTANT)
    Q_PROPERTY(QString mdiServerNetworkOff READ mdiServerNetworkOff CONSTANT)
    Q_PROPERTY(QString mdiServerOff READ mdiServerOff CONSTANT)
    Q_PROPERTY(QString mdiServerPlus READ mdiServerPlus CONSTANT)
    Q_PROPERTY(QString mdiServerRemove READ mdiServerRemove CONSTANT)
    Q_PROPERTY(QString mdiServerSecurity READ mdiServerSecurity CONSTANT)
    Q_PROPERTY(QString mdiSettings READ mdiSettings CONSTANT)
    Q_PROPERTY(QString mdiSettingsBox READ mdiSettingsBox CONSTANT)
    Q_PROPERTY(QString mdiShapeCirclePlus READ mdiShapeCirclePlus CONSTANT)
    Q_PROPERTY(QString mdiShapePlus READ mdiShapePlus CONSTANT)
    Q_PROPERTY(QString mdiShapePolygonPlus READ mdiShapePolygonPlus CONSTANT)
    Q_PROPERTY(QString mdiShapeRectanglePlus READ mdiShapeRectanglePlus CONSTANT)
    Q_PROPERTY(QString mdiShapeSquarePlus READ mdiShapeSquarePlus CONSTANT)
    Q_PROPERTY(QString mdiShare READ mdiShare CONSTANT)
    Q_PROPERTY(QString mdiShareVariant READ mdiShareVariant CONSTANT)
    Q_PROPERTY(QString mdiShield READ mdiShield CONSTANT)
    Q_PROPERTY(QString mdiShieldOutline READ mdiShieldOutline CONSTANT)
    Q_PROPERTY(QString mdiShopping READ mdiShopping CONSTANT)
    Q_PROPERTY(QString mdiShoppingMusic READ mdiShoppingMusic CONSTANT)
    Q_PROPERTY(QString mdiShredder READ mdiShredder CONSTANT)
    Q_PROPERTY(QString mdiShuffle READ mdiShuffle CONSTANT)
    Q_PROPERTY(QString mdiShuffleDisabled READ mdiShuffleDisabled CONSTANT)
    Q_PROPERTY(QString mdiShuffleVariant READ mdiShuffleVariant CONSTANT)
    Q_PROPERTY(QString mdiSigma READ mdiSigma CONSTANT)
    Q_PROPERTY(QString mdiSigmaLower READ mdiSigmaLower CONSTANT)
    Q_PROPERTY(QString mdiSignCaution READ mdiSignCaution CONSTANT)
    Q_PROPERTY(QString mdiSignal READ mdiSignal CONSTANT)
    Q_PROPERTY(QString mdiSignalVariant READ mdiSignalVariant CONSTANT)
    Q_PROPERTY(QString mdiSilverware READ mdiSilverware CONSTANT)
    Q_PROPERTY(QString mdiSilverwareFork READ mdiSilverwareFork CONSTANT)
    Q_PROPERTY(QString mdiSilverwareSpoon READ mdiSilverwareSpoon CONSTANT)
    Q_PROPERTY(QString mdiSilverwareVariant READ mdiSilverwareVariant CONSTANT)
    Q_PROPERTY(QString mdiSim READ mdiSim CONSTANT)
    Q_PROPERTY(QString mdiSimAlert READ mdiSimAlert CONSTANT)
    Q_PROPERTY(QString mdiSimOff READ mdiSimOff CONSTANT)
    Q_PROPERTY(QString mdiSitemap READ mdiSitemap CONSTANT)
    Q_PROPERTY(QString mdiSkipBackward READ mdiSkipBackward CONSTANT)
    Q_PROPERTY(QString mdiSkipForward READ mdiSkipForward CONSTANT)
    Q_PROPERTY(QString mdiSkipNext READ mdiSkipNext CONSTANT)
    Q_PROPERTY(QString mdiSkipNextCircle READ mdiSkipNextCircle CONSTANT)
    Q_PROPERTY(QString mdiSkipNextCircleOutline READ mdiSkipNextCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiSkipPrevious READ mdiSkipPrevious CONSTANT)
    Q_PROPERTY(QString mdiSkipPreviousCircle READ mdiSkipPreviousCircle CONSTANT)
    Q_PROPERTY(QString mdiSkipPreviousCircleOutline READ mdiSkipPreviousCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiSkull READ mdiSkull CONSTANT)
    Q_PROPERTY(QString mdiSkype READ mdiSkype CONSTANT)
    Q_PROPERTY(QString mdiSkypeBusiness READ mdiSkypeBusiness CONSTANT)
    Q_PROPERTY(QString mdiSlack READ mdiSlack CONSTANT)
    Q_PROPERTY(QString mdiSleep READ mdiSleep CONSTANT)
    Q_PROPERTY(QString mdiSleepOff READ mdiSleepOff CONSTANT)
    Q_PROPERTY(QString mdiSmoking READ mdiSmoking CONSTANT)
    Q_PROPERTY(QString mdiSmokingOff READ mdiSmokingOff CONSTANT)
    Q_PROPERTY(QString mdiSnapchat READ mdiSnapchat CONSTANT)
    Q_PROPERTY(QString mdiSnowman READ mdiSnowman CONSTANT)
    Q_PROPERTY(QString mdiSoccer READ mdiSoccer CONSTANT)
    Q_PROPERTY(QString mdiSofa READ mdiSofa CONSTANT)
    Q_PROPERTY(QString mdiSolid READ mdiSolid CONSTANT)
    Q_PROPERTY(QString mdiSort READ mdiSort CONSTANT)
    Q_PROPERTY(QString mdiSortAlphabetical READ mdiSortAlphabetical CONSTANT)
    Q_PROPERTY(QString mdiSortAscending READ mdiSortAscending CONSTANT)
    Q_PROPERTY(QString mdiSortDescending READ mdiSortDescending CONSTANT)
    Q_PROPERTY(QString mdiSortNumeric READ mdiSortNumeric CONSTANT)
    Q_PROPERTY(QString mdiSortVariant READ mdiSortVariant CONSTANT)
    Q_PROPERTY(QString mdiSoundcloud READ mdiSoundcloud CONSTANT)
    Q_PROPERTY(QString mdiSourceBranch READ mdiSourceBranch CONSTANT)
    Q_PROPERTY(QString mdiSourceFork READ mdiSourceFork CONSTANT)
    Q_PROPERTY(QString mdiSourceMerge READ mdiSourceMerge CONSTANT)
    Q_PROPERTY(QString mdiSourcePull READ mdiSourcePull CONSTANT)
    Q_PROPERTY(QString mdiSpeaker READ mdiSpeaker CONSTANT)
    Q_PROPERTY(QString mdiSpeakerOff READ mdiSpeakerOff CONSTANT)
    Q_PROPERTY(QString mdiSpeedometer READ mdiSpeedometer CONSTANT)
    Q_PROPERTY(QString mdiSpellcheck READ mdiSpellcheck CONSTANT)
    Q_PROPERTY(QString mdiSpotify READ mdiSpotify CONSTANT)
    Q_PROPERTY(QString mdiSpotlight READ mdiSpotlight CONSTANT)
    Q_PROPERTY(QString mdiSpotlightBeam READ mdiSpotlightBeam CONSTANT)
    Q_PROPERTY(QString mdiSpray READ mdiSpray CONSTANT)
    Q_PROPERTY(QString mdiSquareInc READ mdiSquareInc CONSTANT)
    Q_PROPERTY(QString mdiSquareIncCash READ mdiSquareIncCash CONSTANT)
    Q_PROPERTY(QString mdiStackexchange READ mdiStackexchange CONSTANT)
    Q_PROPERTY(QString mdiStackoverflow READ mdiStackoverflow CONSTANT)
    Q_PROPERTY(QString mdiStairs READ mdiStairs CONSTANT)
    Q_PROPERTY(QString mdiStar READ mdiStar CONSTANT)
    Q_PROPERTY(QString mdiStarCircle READ mdiStarCircle CONSTANT)
    Q_PROPERTY(QString mdiStarHalf READ mdiStarHalf CONSTANT)
    Q_PROPERTY(QString mdiStarOff READ mdiStarOff CONSTANT)
    Q_PROPERTY(QString mdiStarOutline READ mdiStarOutline CONSTANT)
    Q_PROPERTY(QString mdiSteam READ mdiSteam CONSTANT)
    Q_PROPERTY(QString mdiSteering READ mdiSteering CONSTANT)
    Q_PROPERTY(QString mdiStepBackward READ mdiStepBackward CONSTANT)
    Q_PROPERTY(QString mdiStepBackward2 READ mdiStepBackward2 CONSTANT)
    Q_PROPERTY(QString mdiStepForward READ mdiStepForward CONSTANT)
    Q_PROPERTY(QString mdiStepForward2 READ mdiStepForward2 CONSTANT)
    Q_PROPERTY(QString mdiStethoscope READ mdiStethoscope CONSTANT)
    Q_PROPERTY(QString mdiSticker READ mdiSticker CONSTANT)
    Q_PROPERTY(QString mdiStocking READ mdiStocking CONSTANT)
    Q_PROPERTY(QString mdiStop READ mdiStop CONSTANT)
    Q_PROPERTY(QString mdiStopCircle READ mdiStopCircle CONSTANT)
    Q_PROPERTY(QString mdiStopCircleOutline READ mdiStopCircleOutline CONSTANT)
    Q_PROPERTY(QString mdiStore READ mdiStore CONSTANT)
    Q_PROPERTY(QString mdiStore24Hour READ mdiStore24Hour CONSTANT)
    Q_PROPERTY(QString mdiStove READ mdiStove CONSTANT)
    Q_PROPERTY(QString mdiSubdirectoryArrowLeft READ mdiSubdirectoryArrowLeft CONSTANT)
    Q_PROPERTY(QString mdiSubdirectoryArrowRight READ mdiSubdirectoryArrowRight CONSTANT)
    Q_PROPERTY(QString mdiSubway READ mdiSubway CONSTANT)
    Q_PROPERTY(QString mdiSubwayVariant READ mdiSubwayVariant CONSTANT)
    Q_PROPERTY(QString mdiSunglasses READ mdiSunglasses CONSTANT)
    Q_PROPERTY(QString mdiSurroundSound READ mdiSurroundSound CONSTANT)
    Q_PROPERTY(QString mdiSwapHorizontal READ mdiSwapHorizontal CONSTANT)
    Q_PROPERTY(QString mdiSwapVertical READ mdiSwapVertical CONSTANT)
    Q_PROPERTY(QString mdiSwim READ mdiSwim CONSTANT)
    Q_PROPERTY(QString mdiSwitch READ mdiSwitch CONSTANT)
    Q_PROPERTY(QString mdiSword READ mdiSword CONSTANT)
    Q_PROPERTY(QString mdiSync READ mdiSync CONSTANT)
    Q_PROPERTY(QString mdiSyncAlert READ mdiSyncAlert CONSTANT)
    Q_PROPERTY(QString mdiSyncOff READ mdiSyncOff CONSTANT)
    Q_PROPERTY(QString mdiTab READ mdiTab CONSTANT)
    Q_PROPERTY(QString mdiTabUnselected READ mdiTabUnselected CONSTANT)
    Q_PROPERTY(QString mdiTable READ mdiTable CONSTANT)
    Q_PROPERTY(QString mdiTableColumnPlusAfter READ mdiTableColumnPlusAfter CONSTANT)
    Q_PROPERTY(QString mdiTableColumnPlusBefore READ mdiTableColumnPlusBefore CONSTANT)
    Q_PROPERTY(QString mdiTableColumnRemove READ mdiTableColumnRemove CONSTANT)
    Q_PROPERTY(QString mdiTableColumnWidth READ mdiTableColumnWidth CONSTANT)
    Q_PROPERTY(QString mdiTableEdit READ mdiTableEdit CONSTANT)
    Q_PROPERTY(QString mdiTableLarge READ mdiTableLarge CONSTANT)
    Q_PROPERTY(QString mdiTableRowHeight READ mdiTableRowHeight CONSTANT)
    Q_PROPERTY(QString mdiTableRowPlusAfter READ mdiTableRowPlusAfter CONSTANT)
    Q_PROPERTY(QString mdiTableRowPlusBefore READ mdiTableRowPlusBefore CONSTANT)
    Q_PROPERTY(QString mdiTableRowRemove READ mdiTableRowRemove CONSTANT)
    Q_PROPERTY(QString mdiTablet READ mdiTablet CONSTANT)
    Q_PROPERTY(QString mdiTabletAndroid READ mdiTabletAndroid CONSTANT)
    Q_PROPERTY(QString mdiTabletIpad READ mdiTabletIpad CONSTANT)
    Q_PROPERTY(QString mdiTag READ mdiTag CONSTANT)
    Q_PROPERTY(QString mdiTagFaces READ mdiTagFaces CONSTANT)
    Q_PROPERTY(QString mdiTagHeart READ mdiTagHeart CONSTANT)
    Q_PROPERTY(QString mdiTagMultiple READ mdiTagMultiple CONSTANT)
    Q_PROPERTY(QString mdiTagOutline READ mdiTagOutline CONSTANT)
    Q_PROPERTY(QString mdiTagTextOutline READ mdiTagTextOutline CONSTANT)
    Q_PROPERTY(QString mdiTarget READ mdiTarget CONSTANT)
    Q_PROPERTY(QString mdiTaxi READ mdiTaxi CONSTANT)
    Q_PROPERTY(QString mdiTeamviewer READ mdiTeamviewer CONSTANT)
    Q_PROPERTY(QString mdiTelegram READ mdiTelegram CONSTANT)
    Q_PROPERTY(QString mdiTelevision READ mdiTelevision CONSTANT)
    Q_PROPERTY(QString mdiTelevisionGuide READ mdiTelevisionGuide CONSTANT)
    Q_PROPERTY(QString mdiTemperatureCelsius READ mdiTemperatureCelsius CONSTANT)
    Q_PROPERTY(QString mdiTemperatureFahrenheit READ mdiTemperatureFahrenheit CONSTANT)
    Q_PROPERTY(QString mdiTemperatureKelvin READ mdiTemperatureKelvin CONSTANT)
    Q_PROPERTY(QString mdiTennis READ mdiTennis CONSTANT)
    Q_PROPERTY(QString mdiTent READ mdiTent CONSTANT)
    Q_PROPERTY(QString mdiTerrain READ mdiTerrain CONSTANT)
    Q_PROPERTY(QString mdiTestTube READ mdiTestTube CONSTANT)
    Q_PROPERTY(QString mdiTextShadow READ mdiTextShadow CONSTANT)
    Q_PROPERTY(QString mdiTextToSpeech READ mdiTextToSpeech CONSTANT)
    Q_PROPERTY(QString mdiTextToSpeechOff READ mdiTextToSpeechOff CONSTANT)
    Q_PROPERTY(QString mdiTextbox READ mdiTextbox CONSTANT)
    Q_PROPERTY(QString mdiTexture READ mdiTexture CONSTANT)
    Q_PROPERTY(QString mdiTheater READ mdiTheater CONSTANT)
    Q_PROPERTY(QString mdiThemeLightDark READ mdiThemeLightDark CONSTANT)
    Q_PROPERTY(QString mdiThermometer READ mdiThermometer CONSTANT)
    Q_PROPERTY(QString mdiThermometerLines READ mdiThermometerLines CONSTANT)
    Q_PROPERTY(QString mdiThumbDown READ mdiThumbDown CONSTANT)
    Q_PROPERTY(QString mdiThumbDownOutline READ mdiThumbDownOutline CONSTANT)
    Q_PROPERTY(QString mdiThumbUp READ mdiThumbUp CONSTANT)
    Q_PROPERTY(QString mdiThumbUpOutline READ mdiThumbUpOutline CONSTANT)
    Q_PROPERTY(QString mdiThumbsUpDown READ mdiThumbsUpDown CONSTANT)
    Q_PROPERTY(QString mdiTicket READ mdiTicket CONSTANT)
    Q_PROPERTY(QString mdiTicketAccount READ mdiTicketAccount CONSTANT)
    Q_PROPERTY(QString mdiTicketConfirmation READ mdiTicketConfirmation CONSTANT)
    Q_PROPERTY(QString mdiTie READ mdiTie CONSTANT)
    Q_PROPERTY(QString mdiTimelapse READ mdiTimelapse CONSTANT)
    Q_PROPERTY(QString mdiTimer READ mdiTimer CONSTANT)
    Q_PROPERTY(QString mdiTimer10 READ mdiTimer10 CONSTANT)
    Q_PROPERTY(QString mdiTimer3 READ mdiTimer3 CONSTANT)
    Q_PROPERTY(QString mdiTimerOff READ mdiTimerOff CONSTANT)
    Q_PROPERTY(QString mdiTimerSand READ mdiTimerSand CONSTANT)
    Q_PROPERTY(QString mdiTimerSandEmpty READ mdiTimerSandEmpty CONSTANT)
    Q_PROPERTY(QString mdiTimetable READ mdiTimetable CONSTANT)
    Q_PROPERTY(QString mdiToggleSwitch READ mdiToggleSwitch CONSTANT)
    Q_PROPERTY(QString mdiToggleSwitchOff READ mdiToggleSwitchOff CONSTANT)
    Q_PROPERTY(QString mdiTooltip READ mdiTooltip CONSTANT)
    Q_PROPERTY(QString mdiTooltipEdit READ mdiTooltipEdit CONSTANT)
    Q_PROPERTY(QString mdiTooltipImage READ mdiTooltipImage CONSTANT)
    Q_PROPERTY(QString mdiTooltipOutline READ mdiTooltipOutline CONSTANT)
    Q_PROPERTY(QString mdiTooltipOutlinePlus READ mdiTooltipOutlinePlus CONSTANT)
    Q_PROPERTY(QString mdiTooltipText READ mdiTooltipText CONSTANT)
    Q_PROPERTY(QString mdiTooth READ mdiTooth CONSTANT)
    Q_PROPERTY(QString mdiTor READ mdiTor CONSTANT)
    Q_PROPERTY(QString mdiTowerBeach READ mdiTowerBeach CONSTANT)
    Q_PROPERTY(QString mdiTowerFire READ mdiTowerFire CONSTANT)
    Q_PROPERTY(QString mdiTrafficLight READ mdiTrafficLight CONSTANT)
    Q_PROPERTY(QString mdiTrain READ mdiTrain CONSTANT)
    Q_PROPERTY(QString mdiTram READ mdiTram CONSTANT)
    Q_PROPERTY(QString mdiTranscribe READ mdiTranscribe CONSTANT)
    Q_PROPERTY(QString mdiTranscribeClose READ mdiTranscribeClose CONSTANT)
    Q_PROPERTY(QString mdiTransfer READ mdiTransfer CONSTANT)
    Q_PROPERTY(QString mdiTransitTransfer READ mdiTransitTransfer CONSTANT)
    Q_PROPERTY(QString mdiTranslate READ mdiTranslate CONSTANT)
    Q_PROPERTY(QString mdiTree READ mdiTree CONSTANT)
    Q_PROPERTY(QString mdiTrello READ mdiTrello CONSTANT)
    Q_PROPERTY(QString mdiTrendingDown READ mdiTrendingDown CONSTANT)
    Q_PROPERTY(QString mdiTrendingNeutral READ mdiTrendingNeutral CONSTANT)
    Q_PROPERTY(QString mdiTrendingUp READ mdiTrendingUp CONSTANT)
    Q_PROPERTY(QString mdiTriangle READ mdiTriangle CONSTANT)
    Q_PROPERTY(QString mdiTriangleOutline READ mdiTriangleOutline CONSTANT)
    Q_PROPERTY(QString mdiTrophy READ mdiTrophy CONSTANT)
    Q_PROPERTY(QString mdiTrophyAward READ mdiTrophyAward CONSTANT)
    Q_PROPERTY(QString mdiTrophyOutline READ mdiTrophyOutline CONSTANT)
    Q_PROPERTY(QString mdiTrophyVariant READ mdiTrophyVariant CONSTANT)
    Q_PROPERTY(QString mdiTrophyVariantOutline READ mdiTrophyVariantOutline CONSTANT)
    Q_PROPERTY(QString mdiTruck READ mdiTruck CONSTANT)
    Q_PROPERTY(QString mdiTruckDelivery READ mdiTruckDelivery CONSTANT)
    Q_PROPERTY(QString mdiTshirtCrew READ mdiTshirtCrew CONSTANT)
    Q_PROPERTY(QString mdiTshirtV READ mdiTshirtV CONSTANT)
    Q_PROPERTY(QString mdiTumblr READ mdiTumblr CONSTANT)
    Q_PROPERTY(QString mdiTumblrReblog READ mdiTumblrReblog CONSTANT)
    Q_PROPERTY(QString mdiTune READ mdiTune CONSTANT)
    Q_PROPERTY(QString mdiTuneVertical READ mdiTuneVertical CONSTANT)
    Q_PROPERTY(QString mdiTwitch READ mdiTwitch CONSTANT)
    Q_PROPERTY(QString mdiTwitter READ mdiTwitter CONSTANT)
    Q_PROPERTY(QString mdiTwitterBox READ mdiTwitterBox CONSTANT)
    Q_PROPERTY(QString mdiTwitterCircle READ mdiTwitterCircle CONSTANT)
    Q_PROPERTY(QString mdiTwitterRetweet READ mdiTwitterRetweet CONSTANT)
    Q_PROPERTY(QString mdiUbuntu READ mdiUbuntu CONSTANT)
    Q_PROPERTY(QString mdiUmbraco READ mdiUmbraco CONSTANT)
    Q_PROPERTY(QString mdiUmbrella READ mdiUmbrella CONSTANT)
    Q_PROPERTY(QString mdiUmbrellaOutline READ mdiUmbrellaOutline CONSTANT)
    Q_PROPERTY(QString mdiUndo READ mdiUndo CONSTANT)
    Q_PROPERTY(QString mdiUndoVariant READ mdiUndoVariant CONSTANT)
    Q_PROPERTY(QString mdiUnfoldLess READ mdiUnfoldLess CONSTANT)
    Q_PROPERTY(QString mdiUnfoldMore READ mdiUnfoldMore CONSTANT)
    Q_PROPERTY(QString mdiUngroup READ mdiUngroup CONSTANT)
    Q_PROPERTY(QString mdiUnity READ mdiUnity CONSTANT)
    Q_PROPERTY(QString mdiUntappd READ mdiUntappd CONSTANT)
    Q_PROPERTY(QString mdiUpdate READ mdiUpdate CONSTANT)
    Q_PROPERTY(QString mdiUpload READ mdiUpload CONSTANT)
    Q_PROPERTY(QString mdiUsb READ mdiUsb CONSTANT)
    Q_PROPERTY(QString mdiVectorArrangeAbove READ mdiVectorArrangeAbove CONSTANT)
    Q_PROPERTY(QString mdiVectorArrangeBelow READ mdiVectorArrangeBelow CONSTANT)
    Q_PROPERTY(QString mdiVectorCircle READ mdiVectorCircle CONSTANT)
    Q_PROPERTY(QString mdiVectorCircleVariant READ mdiVectorCircleVariant CONSTANT)
    Q_PROPERTY(QString mdiVectorCombine READ mdiVectorCombine CONSTANT)
    Q_PROPERTY(QString mdiVectorCurve READ mdiVectorCurve CONSTANT)
    Q_PROPERTY(QString mdiVectorDifference READ mdiVectorDifference CONSTANT)
    Q_PROPERTY(QString mdiVectorDifferenceAb READ mdiVectorDifferenceAb CONSTANT)
    Q_PROPERTY(QString mdiVectorDifferenceBa READ mdiVectorDifferenceBa CONSTANT)
    Q_PROPERTY(QString mdiVectorIntersection READ mdiVectorIntersection CONSTANT)
    Q_PROPERTY(QString mdiVectorLine READ mdiVectorLine CONSTANT)
    Q_PROPERTY(QString mdiVectorPoint READ mdiVectorPoint CONSTANT)
    Q_PROPERTY(QString mdiVectorPolygon READ mdiVectorPolygon CONSTANT)
    Q_PROPERTY(QString mdiVectorPolyline READ mdiVectorPolyline CONSTANT)
    Q_PROPERTY(QString mdiVectorRectangle READ mdiVectorRectangle CONSTANT)
    Q_PROPERTY(QString mdiVectorSelection READ mdiVectorSelection CONSTANT)
    Q_PROPERTY(QString mdiVectorSquare READ mdiVectorSquare CONSTANT)
    Q_PROPERTY(QString mdiVectorTriangle READ mdiVectorTriangle CONSTANT)
    Q_PROPERTY(QString mdiVectorUnion READ mdiVectorUnion CONSTANT)
    Q_PROPERTY(QString mdiVerified READ mdiVerified CONSTANT)
    Q_PROPERTY(QString mdiVibrate READ mdiVibrate CONSTANT)
    Q_PROPERTY(QString mdiVideo READ mdiVideo CONSTANT)
    Q_PROPERTY(QString mdiVideoOff READ mdiVideoOff CONSTANT)
    Q_PROPERTY(QString mdiVideoSwitch READ mdiVideoSwitch CONSTANT)
    Q_PROPERTY(QString mdiViewAgenda READ mdiViewAgenda CONSTANT)
    Q_PROPERTY(QString mdiViewArray READ mdiViewArray CONSTANT)
    Q_PROPERTY(QString mdiViewCarousel READ mdiViewCarousel CONSTANT)
    Q_PROPERTY(QString mdiViewColumn READ mdiViewColumn CONSTANT)
    Q_PROPERTY(QString mdiViewDashboard READ mdiViewDashboard CONSTANT)
    Q_PROPERTY(QString mdiViewDay READ mdiViewDay CONSTANT)
    Q_PROPERTY(QString mdiViewGrid READ mdiViewGrid CONSTANT)
    Q_PROPERTY(QString mdiViewHeadline READ mdiViewHeadline CONSTANT)
    Q_PROPERTY(QString mdiViewList READ mdiViewList CONSTANT)
    Q_PROPERTY(QString mdiViewModule READ mdiViewModule CONSTANT)
    Q_PROPERTY(QString mdiViewQuilt READ mdiViewQuilt CONSTANT)
    Q_PROPERTY(QString mdiViewStream READ mdiViewStream CONSTANT)
    Q_PROPERTY(QString mdiViewWeek READ mdiViewWeek CONSTANT)
    Q_PROPERTY(QString mdiVimeo READ mdiVimeo CONSTANT)
    Q_PROPERTY(QString mdiVine READ mdiVine CONSTANT)
    Q_PROPERTY(QString mdiViolin READ mdiViolin CONSTANT)
    Q_PROPERTY(QString mdiVisualstudio READ mdiVisualstudio CONSTANT)
    Q_PROPERTY(QString mdiVk READ mdiVk CONSTANT)
    Q_PROPERTY(QString mdiVkBox READ mdiVkBox CONSTANT)
    Q_PROPERTY(QString mdiVkCircle READ mdiVkCircle CONSTANT)
    Q_PROPERTY(QString mdiVlc READ mdiVlc CONSTANT)
    Q_PROPERTY(QString mdiVoice READ mdiVoice CONSTANT)
    Q_PROPERTY(QString mdiVoicemail READ mdiVoicemail CONSTANT)
    Q_PROPERTY(QString mdiVolumeHigh READ mdiVolumeHigh CONSTANT)
    Q_PROPERTY(QString mdiVolumeLow READ mdiVolumeLow CONSTANT)
    Q_PROPERTY(QString mdiVolumeMedium READ mdiVolumeMedium CONSTANT)
    Q_PROPERTY(QString mdiVolumeOff READ mdiVolumeOff CONSTANT)
    Q_PROPERTY(QString mdiVpn READ mdiVpn CONSTANT)
    Q_PROPERTY(QString mdiWalk READ mdiWalk CONSTANT)
    Q_PROPERTY(QString mdiWallet READ mdiWallet CONSTANT)
    Q_PROPERTY(QString mdiWalletGiftcard READ mdiWalletGiftcard CONSTANT)
    Q_PROPERTY(QString mdiWalletMembership READ mdiWalletMembership CONSTANT)
    Q_PROPERTY(QString mdiWalletTravel READ mdiWalletTravel CONSTANT)
    Q_PROPERTY(QString mdiWan READ mdiWan CONSTANT)
    Q_PROPERTY(QString mdiWatch READ mdiWatch CONSTANT)
    Q_PROPERTY(QString mdiWatchExport READ mdiWatchExport CONSTANT)
    Q_PROPERTY(QString mdiWatchImport READ mdiWatchImport CONSTANT)
    Q_PROPERTY(QString mdiWatchVibrate READ mdiWatchVibrate CONSTANT)
    Q_PROPERTY(QString mdiWater READ mdiWater CONSTANT)
    Q_PROPERTY(QString mdiWaterOff READ mdiWaterOff CONSTANT)
    Q_PROPERTY(QString mdiWaterPercent READ mdiWaterPercent CONSTANT)
    Q_PROPERTY(QString mdiWaterPump READ mdiWaterPump CONSTANT)
    Q_PROPERTY(QString mdiWatermark READ mdiWatermark CONSTANT)
    Q_PROPERTY(QString mdiWeatherCloudy READ mdiWeatherCloudy CONSTANT)
    Q_PROPERTY(QString mdiWeatherFog READ mdiWeatherFog CONSTANT)
    Q_PROPERTY(QString mdiWeatherHail READ mdiWeatherHail CONSTANT)
    Q_PROPERTY(QString mdiWeatherLightning READ mdiWeatherLightning CONSTANT)
    Q_PROPERTY(QString mdiWeatherLightningRainy READ mdiWeatherLightningRainy CONSTANT)
    Q_PROPERTY(QString mdiWeatherNight READ mdiWeatherNight CONSTANT)
    Q_PROPERTY(QString mdiWeatherPartlycloudy READ mdiWeatherPartlycloudy CONSTANT)
    Q_PROPERTY(QString mdiWeatherPouring READ mdiWeatherPouring CONSTANT)
    Q_PROPERTY(QString mdiWeatherRainy READ mdiWeatherRainy CONSTANT)
    Q_PROPERTY(QString mdiWeatherSnowy READ mdiWeatherSnowy CONSTANT)
    Q_PROPERTY(QString mdiWeatherSnowyRainy READ mdiWeatherSnowyRainy CONSTANT)
    Q_PROPERTY(QString mdiWeatherSunny READ mdiWeatherSunny CONSTANT)
    Q_PROPERTY(QString mdiWeatherSunset READ mdiWeatherSunset CONSTANT)
    Q_PROPERTY(QString mdiWeatherSunsetDown READ mdiWeatherSunsetDown CONSTANT)
    Q_PROPERTY(QString mdiWeatherSunsetUp READ mdiWeatherSunsetUp CONSTANT)
    Q_PROPERTY(QString mdiWeatherWindy READ mdiWeatherWindy CONSTANT)
    Q_PROPERTY(QString mdiWeatherWindyVariant READ mdiWeatherWindyVariant CONSTANT)
    Q_PROPERTY(QString mdiWeb READ mdiWeb CONSTANT)
    Q_PROPERTY(QString mdiWebcam READ mdiWebcam CONSTANT)
    Q_PROPERTY(QString mdiWebhook READ mdiWebhook CONSTANT)
    Q_PROPERTY(QString mdiWechat READ mdiWechat CONSTANT)
    Q_PROPERTY(QString mdiWeight READ mdiWeight CONSTANT)
    Q_PROPERTY(QString mdiWeightKilogram READ mdiWeightKilogram CONSTANT)
    Q_PROPERTY(QString mdiWhatsapp READ mdiWhatsapp CONSTANT)
    Q_PROPERTY(QString mdiWheelchairAccessibility READ mdiWheelchairAccessibility CONSTANT)
    Q_PROPERTY(QString mdiWhiteBalanceAuto READ mdiWhiteBalanceAuto CONSTANT)
    Q_PROPERTY(QString mdiWhiteBalanceIncandescent READ mdiWhiteBalanceIncandescent CONSTANT)
    Q_PROPERTY(QString mdiWhiteBalanceIridescent READ mdiWhiteBalanceIridescent CONSTANT)
    Q_PROPERTY(QString mdiWhiteBalanceSunny READ mdiWhiteBalanceSunny CONSTANT)
    Q_PROPERTY(QString mdiWifi READ mdiWifi CONSTANT)
    Q_PROPERTY(QString mdiWifiOff READ mdiWifiOff CONSTANT)
    Q_PROPERTY(QString mdiWii READ mdiWii CONSTANT)
    Q_PROPERTY(QString mdiWikipedia READ mdiWikipedia CONSTANT)
    Q_PROPERTY(QString mdiWindowClose READ mdiWindowClose CONSTANT)
    Q_PROPERTY(QString mdiWindowClosed READ mdiWindowClosed CONSTANT)
    Q_PROPERTY(QString mdiWindowMaximize READ mdiWindowMaximize CONSTANT)
    Q_PROPERTY(QString mdiWindowMinimize READ mdiWindowMinimize CONSTANT)
    Q_PROPERTY(QString mdiWindowOpen READ mdiWindowOpen CONSTANT)
    Q_PROPERTY(QString mdiWindowRestore READ mdiWindowRestore CONSTANT)
    Q_PROPERTY(QString mdiWindows READ mdiWindows CONSTANT)
    Q_PROPERTY(QString mdiWordpress READ mdiWordpress CONSTANT)
    Q_PROPERTY(QString mdiWorker READ mdiWorker CONSTANT)
    Q_PROPERTY(QString mdiWrap READ mdiWrap CONSTANT)
    Q_PROPERTY(QString mdiWrench READ mdiWrench CONSTANT)
    Q_PROPERTY(QString mdiWunderlist READ mdiWunderlist CONSTANT)
    Q_PROPERTY(QString mdiXaml READ mdiXaml CONSTANT)
    Q_PROPERTY(QString mdiXbox READ mdiXbox CONSTANT)
    Q_PROPERTY(QString mdiXboxController READ mdiXboxController CONSTANT)
    Q_PROPERTY(QString mdiXboxControllerOff READ mdiXboxControllerOff CONSTANT)
    Q_PROPERTY(QString mdiXda READ mdiXda CONSTANT)
    Q_PROPERTY(QString mdiXing READ mdiXing CONSTANT)
    Q_PROPERTY(QString mdiXingBox READ mdiXingBox CONSTANT)
    Q_PROPERTY(QString mdiXingCircle READ mdiXingCircle CONSTANT)
    Q_PROPERTY(QString mdiXml READ mdiXml CONSTANT)
    Q_PROPERTY(QString mdiYeast READ mdiYeast CONSTANT)
    Q_PROPERTY(QString mdiYelp READ mdiYelp CONSTANT)
    Q_PROPERTY(QString mdiYinYang READ mdiYinYang CONSTANT)
    Q_PROPERTY(QString mdiYoutubePlay READ mdiYoutubePlay CONSTANT)
    Q_PROPERTY(QString mdiZipBox READ mdiZipBox CONSTANT)
    Q_PROPERTY(QString mdiBlank READ mdiBlank CONSTANT)

public:
    QString mdiAccessPoint() const { return "\uf002"; }
    QString mdiAccessPointNetwork() const { return "\uf003"; }
    QString mdiAccount() const { return "\uf004"; }
    QString mdiAccountAlert() const { return "\uf005"; }
    QString mdiAccountBox() const { return "\uf006"; }
    QString mdiAccountBoxOutline() const { return "\uf007"; }
    QString mdiAccountCardDetails() const { return "\uf5d2"; }
    QString mdiAccountCheck() const { return "\uf008"; }
    QString mdiAccountCircle() const { return "\uf009"; }
    QString mdiAccountConvert() const { return "\uf00a"; }
    QString mdiAccountKey() const { return "\uf00b"; }
    QString mdiAccountLocation() const { return "\uf00c"; }
    QString mdiAccountMinus() const { return "\uf00d"; }
    QString mdiAccountMultiple() const { return "\uf00e"; }
    QString mdiAccountMultipleMinus() const { return "\uf5d3"; }
    QString mdiAccountMultipleOutline() const { return "\uf00f"; }
    QString mdiAccountMultiplePlus() const { return "\uf010"; }
    QString mdiAccountNetwork() const { return "\uf011"; }
    QString mdiAccountOff() const { return "\uf012"; }
    QString mdiAccountOutline() const { return "\uf013"; }
    QString mdiAccountPlus() const { return "\uf014"; }
    QString mdiAccountRemove() const { return "\uf015"; }
    QString mdiAccountSearch() const { return "\uf016"; }
    QString mdiAccountSettings() const { return "\uf630"; }
    QString mdiAccountSettingsVariant() const { return "\uf631"; }
    QString mdiAccountStar() const { return "\uf017"; }
    QString mdiAccountStarVariant() const { return "\uf018"; }
    QString mdiAccountSwitch() const { return "\uf019"; }
    QString mdiAdjust() const { return "\uf01a"; }
    QString mdiAirConditioner() const { return "\uf01b"; }
    QString mdiAirballoon() const { return "\uf01c"; }
    QString mdiAirplane() const { return "\uf01d"; }
    QString mdiAirplaneLanding() const { return "\uf5d4"; }
    QString mdiAirplaneOff() const { return "\uf01e"; }
    QString mdiAirplaneTakeoff() const { return "\uf5d5"; }
    QString mdiAirplay() const { return "\uf01f"; }
    QString mdiAlarm() const { return "\uf020"; }
    QString mdiAlarmCheck() const { return "\uf021"; }
    QString mdiAlarmMultiple() const { return "\uf022"; }
    QString mdiAlarmOff() const { return "\uf023"; }
    QString mdiAlarmPlus() const { return "\uf024"; }
    QString mdiAlarmSnooze() const { return "\uf68d"; }
    QString mdiAlbum() const { return "\uf025"; }
    QString mdiAlert() const { return "\uf026"; }
    QString mdiAlertBox() const { return "\uf027"; }
    QString mdiAlertCircle() const { return "\uf028"; }
    QString mdiAlertCircleOutline() const { return "\uf5d6"; }
    QString mdiAlertOctagon() const { return "\uf029"; }
    QString mdiAlertOutline() const { return "\uf02a"; }
    QString mdiAlpha() const { return "\uf02b"; }
    QString mdiAlphabetical() const { return "\uf02c"; }
    QString mdiAltimeter() const { return "\uf5d7"; }
    QString mdiAmazon() const { return "\uf02d"; }
    QString mdiAmazonClouddrive() const { return "\uf02e"; }
    QString mdiAmbulance() const { return "\uf02f"; }
    QString mdiAmplifier() const { return "\uf030"; }
    QString mdiAnchor() const { return "\uf031"; }
    QString mdiAndroid() const { return "\uf032"; }
    QString mdiAndroidDebugBridge() const { return "\uf033"; }
    QString mdiAndroidStudio() const { return "\uf034"; }
    QString mdiAngular() const { return "\uf6b1"; }
    QString mdiAnimation() const { return "\uf5d8"; }
    QString mdiApple() const { return "\uf035"; }
    QString mdiAppleFinder() const { return "\uf036"; }
    QString mdiAppleIos() const { return "\uf037"; }
    QString mdiAppleKeyboardCaps() const { return "\uf632"; }
    QString mdiAppleKeyboardCommand() const { return "\uf633"; }
    QString mdiAppleKeyboardControl() const { return "\uf634"; }
    QString mdiAppleKeyboardOption() const { return "\uf635"; }
    QString mdiAppleKeyboardShift() const { return "\uf636"; }
    QString mdiAppleMobileme() const { return "\uf038"; }
    QString mdiAppleSafari() const { return "\uf039"; }
    QString mdiApplication() const { return "\uf614"; }
    QString mdiAppnet() const { return "\uf03a"; }
    QString mdiApps() const { return "\uf03b"; }
    QString mdiArchive() const { return "\uf03c"; }
    QString mdiArrangeBringForward() const { return "\uf03d"; }
    QString mdiArrangeBringToFront() const { return "\uf03e"; }
    QString mdiArrangeSendBackward() const { return "\uf03f"; }
    QString mdiArrangeSendToBack() const { return "\uf040"; }
    QString mdiArrowAll() const { return "\uf041"; }
    QString mdiArrowBottomLeft() const { return "\uf042"; }
    QString mdiArrowBottomRight() const { return "\uf043"; }
    QString mdiArrowCompress() const { return "\uf615"; }
    QString mdiArrowCompressAll() const { return "\uf044"; }
    QString mdiArrowDown() const { return "\uf045"; }
    QString mdiArrowDownBold() const { return "\uf046"; }
    QString mdiArrowDownBoldCircle() const { return "\uf047"; }
    QString mdiArrowDownBoldCircleOutline() const { return "\uf048"; }
    QString mdiArrowDownBoldHexagonOutline() const { return "\uf049"; }
    QString mdiArrowDownDropCircle() const { return "\uf04a"; }
    QString mdiArrowDownDropCircleOutline() const { return "\uf04b"; }
    QString mdiArrowExpand() const { return "\uf616"; }
    QString mdiArrowExpandAll() const { return "\uf04c"; }
    QString mdiArrowLeft() const { return "\uf04d"; }
    QString mdiArrowLeftBold() const { return "\uf04e"; }
    QString mdiArrowLeftBoldCircle() const { return "\uf04f"; }
    QString mdiArrowLeftBoldCircleOutline() const { return "\uf050"; }
    QString mdiArrowLeftBoldHexagonOutline() const { return "\uf051"; }
    QString mdiArrowLeftDropCircle() const { return "\uf052"; }
    QString mdiArrowLeftDropCircleOutline() const { return "\uf053"; }
    QString mdiArrowRight() const { return "\uf054"; }
    QString mdiArrowRightBold() const { return "\uf055"; }
    QString mdiArrowRightBoldCircle() const { return "\uf056"; }
    QString mdiArrowRightBoldCircleOutline() const { return "\uf057"; }
    QString mdiArrowRightBoldHexagonOutline() const { return "\uf058"; }
    QString mdiArrowRightDropCircle() const { return "\uf059"; }
    QString mdiArrowRightDropCircleOutline() const { return "\uf05a"; }
    QString mdiArrowTopLeft() const { return "\uf05b"; }
    QString mdiArrowTopRight() const { return "\uf05c"; }
    QString mdiArrowUp() const { return "\uf05d"; }
    QString mdiArrowUpBold() const { return "\uf05e"; }
    QString mdiArrowUpBoldCircle() const { return "\uf05f"; }
    QString mdiArrowUpBoldCircleOutline() const { return "\uf060"; }
    QString mdiArrowUpBoldHexagonOutline() const { return "\uf061"; }
    QString mdiArrowUpDropCircle() const { return "\uf062"; }
    QString mdiArrowUpDropCircleOutline() const { return "\uf063"; }
    QString mdiAssistant() const { return "\uf064"; }
    QString mdiAt() const { return "\uf065"; }
    QString mdiAttachment() const { return "\uf066"; }
    QString mdiAudiobook() const { return "\uf067"; }
    QString mdiAutoFix() const { return "\uf068"; }
    QString mdiAutoUpload() const { return "\uf069"; }
    QString mdiAutorenew() const { return "\uf06a"; }
    QString mdiAvTimer() const { return "\uf06b"; }
    QString mdiBaby() const { return "\uf06c"; }
    QString mdiBabyBuggy() const { return "\uf68e"; }
    QString mdiBackburger() const { return "\uf06d"; }
    QString mdiBackspace() const { return "\uf06e"; }
    QString mdiBackupRestore() const { return "\uf06f"; }
    QString mdiBandcamp() const { return "\uf674"; }
    QString mdiBank() const { return "\uf070"; }
    QString mdiBarcode() const { return "\uf071"; }
    QString mdiBarcodeScan() const { return "\uf072"; }
    QString mdiBarley() const { return "\uf073"; }
    QString mdiBarrel() const { return "\uf074"; }
    QString mdiBasecamp() const { return "\uf075"; }
    QString mdiBasket() const { return "\uf076"; }
    QString mdiBasketFill() const { return "\uf077"; }
    QString mdiBasketUnfill() const { return "\uf078"; }
    QString mdiBattery() const { return "\uf079"; }
    QString mdiBattery10() const { return "\uf07a"; }
    QString mdiBattery20() const { return "\uf07b"; }
    QString mdiBattery30() const { return "\uf07c"; }
    QString mdiBattery40() const { return "\uf07d"; }
    QString mdiBattery50() const { return "\uf07e"; }
    QString mdiBattery60() const { return "\uf07f"; }
    QString mdiBattery70() const { return "\uf080"; }
    QString mdiBattery80() const { return "\uf081"; }
    QString mdiBattery90() const { return "\uf082"; }
    QString mdiBatteryAlert() const { return "\uf083"; }
    QString mdiBatteryCharging() const { return "\uf084"; }
    QString mdiBatteryCharging100() const { return "\uf085"; }
    QString mdiBatteryCharging20() const { return "\uf086"; }
    QString mdiBatteryCharging30() const { return "\uf087"; }
    QString mdiBatteryCharging40() const { return "\uf088"; }
    QString mdiBatteryCharging60() const { return "\uf089"; }
    QString mdiBatteryCharging80() const { return "\uf08a"; }
    QString mdiBatteryCharging90() const { return "\uf08b"; }
    QString mdiBatteryMinus() const { return "\uf08c"; }
    QString mdiBatteryNegative() const { return "\uf08d"; }
    QString mdiBatteryOutline() const { return "\uf08e"; }
    QString mdiBatteryPlus() const { return "\uf08f"; }
    QString mdiBatteryPositive() const { return "\uf090"; }
    QString mdiBatteryUnknown() const { return "\uf091"; }
    QString mdiBeach() const { return "\uf092"; }
    QString mdiBeaker() const { return "\uf68f"; }
    QString mdiBeats() const { return "\uf097"; }
    QString mdiBeer() const { return "\uf098"; }
    QString mdiBehance() const { return "\uf099"; }
    QString mdiBell() const { return "\uf09a"; }
    QString mdiBellOff() const { return "\uf09b"; }
    QString mdiBellOutline() const { return "\uf09c"; }
    QString mdiBellPlus() const { return "\uf09d"; }
    QString mdiBellRing() const { return "\uf09e"; }
    QString mdiBellRingOutline() const { return "\uf09f"; }
    QString mdiBellSleep() const { return "\uf0a0"; }
    QString mdiBeta() const { return "\uf0a1"; }
    QString mdiBible() const { return "\uf0a2"; }
    QString mdiBike() const { return "\uf0a3"; }
    QString mdiBing() const { return "\uf0a4"; }
    QString mdiBinoculars() const { return "\uf0a5"; }
    QString mdiBio() const { return "\uf0a6"; }
    QString mdiBiohazard() const { return "\uf0a7"; }
    QString mdiBitbucket() const { return "\uf0a8"; }
    QString mdiBlackMesa() const { return "\uf0a9"; }
    QString mdiBlackberry() const { return "\uf0aa"; }
    QString mdiBlender() const { return "\uf0ab"; }
    QString mdiBlinds() const { return "\uf0ac"; }
    QString mdiBlockHelper() const { return "\uf0ad"; }
    QString mdiBlogger() const { return "\uf0ae"; }
    QString mdiBluetooth() const { return "\uf0af"; }
    QString mdiBluetoothAudio() const { return "\uf0b0"; }
    QString mdiBluetoothConnect() const { return "\uf0b1"; }
    QString mdiBluetoothOff() const { return "\uf0b2"; }
    QString mdiBluetoothSettings() const { return "\uf0b3"; }
    QString mdiBluetoothTransfer() const { return "\uf0b4"; }
    QString mdiBlur() const { return "\uf0b5"; }
    QString mdiBlurLinear() const { return "\uf0b6"; }
    QString mdiBlurOff() const { return "\uf0b7"; }
    QString mdiBlurRadial() const { return "\uf0b8"; }
    QString mdiBomb() const { return "\uf690"; }
    QString mdiBone() const { return "\uf0b9"; }
    QString mdiBook() const { return "\uf0ba"; }
    QString mdiBookMinus() const { return "\uf5d9"; }
    QString mdiBookMultiple() const { return "\uf0bb"; }
    QString mdiBookMultipleVariant() const { return "\uf0bc"; }
    QString mdiBookOpen() const { return "\uf0bd"; }
    QString mdiBookOpenPageVariant() const { return "\uf5da"; }
    QString mdiBookOpenVariant() const { return "\uf0be"; }
    QString mdiBookPlus() const { return "\uf5db"; }
    QString mdiBookVariant() const { return "\uf0bf"; }
    QString mdiBookmark() const { return "\uf0c0"; }
    QString mdiBookmarkCheck() const { return "\uf0c1"; }
    QString mdiBookmarkMusic() const { return "\uf0c2"; }
    QString mdiBookmarkOutline() const { return "\uf0c3"; }
    QString mdiBookmarkPlus() const { return "\uf0c5"; }
    QString mdiBookmarkPlusOutline() const { return "\uf0c4"; }
    QString mdiBookmarkRemove() const { return "\uf0c6"; }
    QString mdiBoombox() const { return "\uf5dc"; }
    QString mdiBorderAll() const { return "\uf0c7"; }
    QString mdiBorderBottom() const { return "\uf0c8"; }
    QString mdiBorderColor() const { return "\uf0c9"; }
    QString mdiBorderHorizontal() const { return "\uf0ca"; }
    QString mdiBorderInside() const { return "\uf0cb"; }
    QString mdiBorderLeft() const { return "\uf0cc"; }
    QString mdiBorderNone() const { return "\uf0cd"; }
    QString mdiBorderOutside() const { return "\uf0ce"; }
    QString mdiBorderRight() const { return "\uf0cf"; }
    QString mdiBorderStyle() const { return "\uf0d0"; }
    QString mdiBorderTop() const { return "\uf0d1"; }
    QString mdiBorderVertical() const { return "\uf0d2"; }
    QString mdiBowTie() const { return "\uf677"; }
    QString mdiBowl() const { return "\uf617"; }
    QString mdiBowling() const { return "\uf0d3"; }
    QString mdiBox() const { return "\uf0d4"; }
    QString mdiBoxCutter() const { return "\uf0d5"; }
    QString mdiBoxShadow() const { return "\uf637"; }
    QString mdiBridge() const { return "\uf618"; }
    QString mdiBriefcase() const { return "\uf0d6"; }
    QString mdiBriefcaseCheck() const { return "\uf0d7"; }
    QString mdiBriefcaseDownload() const { return "\uf0d8"; }
    QString mdiBriefcaseUpload() const { return "\uf0d9"; }
    QString mdiBrightness1() const { return "\uf0da"; }
    QString mdiBrightness2() const { return "\uf0db"; }
    QString mdiBrightness3() const { return "\uf0dc"; }
    QString mdiBrightness4() const { return "\uf0dd"; }
    QString mdiBrightness5() const { return "\uf0de"; }
    QString mdiBrightness6() const { return "\uf0df"; }
    QString mdiBrightness7() const { return "\uf0e0"; }
    QString mdiBrightnessAuto() const { return "\uf0e1"; }
    QString mdiBroom() const { return "\uf0e2"; }
    QString mdiBrush() const { return "\uf0e3"; }
    QString mdiBuffer() const { return "\uf619"; }
    QString mdiBug() const { return "\uf0e4"; }
    QString mdiBulletinBoard() const { return "\uf0e5"; }
    QString mdiBullhorn() const { return "\uf0e6"; }
    QString mdiBullseye() const { return "\uf5dd"; }
    QString mdiBurstMode() const { return "\uf5de"; }
    QString mdiBus() const { return "\uf0e7"; }
    QString mdiCached() const { return "\uf0e8"; }
    QString mdiCake() const { return "\uf0e9"; }
    QString mdiCakeLayered() const { return "\uf0ea"; }
    QString mdiCakeVariant() const { return "\uf0eb"; }
    QString mdiCalculator() const { return "\uf0ec"; }
    QString mdiCalendar() const { return "\uf0ed"; }
    QString mdiCalendarBlank() const { return "\uf0ee"; }
    QString mdiCalendarCheck() const { return "\uf0ef"; }
    QString mdiCalendarClock() const { return "\uf0f0"; }
    QString mdiCalendarMultiple() const { return "\uf0f1"; }
    QString mdiCalendarMultipleCheck() const { return "\uf0f2"; }
    QString mdiCalendarPlus() const { return "\uf0f3"; }
    QString mdiCalendarQuestion() const { return "\uf691"; }
    QString mdiCalendarRange() const { return "\uf678"; }
    QString mdiCalendarRemove() const { return "\uf0f4"; }
    QString mdiCalendarText() const { return "\uf0f5"; }
    QString mdiCalendarToday() const { return "\uf0f6"; }
    QString mdiCallMade() const { return "\uf0f7"; }
    QString mdiCallMerge() const { return "\uf0f8"; }
    QString mdiCallMissed() const { return "\uf0f9"; }
    QString mdiCallReceived() const { return "\uf0fa"; }
    QString mdiCallSplit() const { return "\uf0fb"; }
    QString mdiCamcorder() const { return "\uf0fc"; }
    QString mdiCamcorderBox() const { return "\uf0fd"; }
    QString mdiCamcorderBoxOff() const { return "\uf0fe"; }
    QString mdiCamcorderOff() const { return "\uf0ff"; }
    QString mdiCamera() const { return "\uf100"; }
    QString mdiCameraBurst() const { return "\uf692"; }
    QString mdiCameraEnhance() const { return "\uf101"; }
    QString mdiCameraFront() const { return "\uf102"; }
    QString mdiCameraFrontVariant() const { return "\uf103"; }
    QString mdiCameraIris() const { return "\uf104"; }
    QString mdiCameraOff() const { return "\uf5df"; }
    QString mdiCameraPartyMode() const { return "\uf105"; }
    QString mdiCameraRear() const { return "\uf106"; }
    QString mdiCameraRearVariant() const { return "\uf107"; }
    QString mdiCameraSwitch() const { return "\uf108"; }
    QString mdiCameraTimer() const { return "\uf109"; }
    QString mdiCandle() const { return "\uf5e2"; }
    QString mdiCandycane() const { return "\uf10a"; }
    QString mdiCar() const { return "\uf10b"; }
    QString mdiCarBattery() const { return "\uf10c"; }
    QString mdiCarConnected() const { return "\uf10d"; }
    QString mdiCarWash() const { return "\uf10e"; }
    QString mdiCards() const { return "\uf638"; }
    QString mdiCardsOutline() const { return "\uf639"; }
    QString mdiCardsPlayingOutline() const { return "\uf63a"; }
    QString mdiCarrot() const { return "\uf10f"; }
    QString mdiCart() const { return "\uf110"; }
    QString mdiCartOff() const { return "\uf66b"; }
    QString mdiCartOutline() const { return "\uf111"; }
    QString mdiCartPlus() const { return "\uf112"; }
    QString mdiCaseSensitiveAlt() const { return "\uf113"; }
    QString mdiCash() const { return "\uf114"; }
    QString mdiCash100() const { return "\uf115"; }
    QString mdiCashMultiple() const { return "\uf116"; }
    QString mdiCashUsd() const { return "\uf117"; }
    QString mdiCast() const { return "\uf118"; }
    QString mdiCastConnected() const { return "\uf119"; }
    QString mdiCastle() const { return "\uf11a"; }
    QString mdiCat() const { return "\uf11b"; }
    QString mdiCellphone() const { return "\uf11c"; }
    QString mdiCellphoneAndroid() const { return "\uf11d"; }
    QString mdiCellphoneBasic() const { return "\uf11e"; }
    QString mdiCellphoneDock() const { return "\uf11f"; }
    QString mdiCellphoneIphone() const { return "\uf120"; }
    QString mdiCellphoneLink() const { return "\uf121"; }
    QString mdiCellphoneLinkOff() const { return "\uf122"; }
    QString mdiCellphoneSettings() const { return "\uf123"; }
    QString mdiCertificate() const { return "\uf124"; }
    QString mdiChairSchool() const { return "\uf125"; }
    QString mdiChartArc() const { return "\uf126"; }
    QString mdiChartAreaspline() const { return "\uf127"; }
    QString mdiChartBar() const { return "\uf128"; }
    QString mdiChartBubble() const { return "\uf5e3"; }
    QString mdiChartGantt() const { return "\uf66c"; }
    QString mdiChartHistogram() const { return "\uf129"; }
    QString mdiChartLine() const { return "\uf12a"; }
    QString mdiChartPie() const { return "\uf12b"; }
    QString mdiChartScatterplotHexbin() const { return "\uf66d"; }
    QString mdiChartTimeline() const { return "\uf66e"; }
    QString mdiCheck() const { return "\uf12c"; }
    QString mdiCheckAll() const { return "\uf12d"; }
    QString mdiCheckCircle() const { return "\uf5e0"; }
    QString mdiCheckCircleOutline() const { return "\uf5e1"; }
    QString mdiCheckboxBlank() const { return "\uf12e"; }
    QString mdiCheckboxBlankCircle() const { return "\uf12f"; }
    QString mdiCheckboxBlankCircleOutline() const { return "\uf130"; }
    QString mdiCheckboxBlankOutline() const { return "\uf131"; }
    QString mdiCheckboxMarked() const { return "\uf132"; }
    QString mdiCheckboxMarkedCircle() const { return "\uf133"; }
    QString mdiCheckboxMarkedCircleOutline() const { return "\uf134"; }
    QString mdiCheckboxMarkedOutline() const { return "\uf135"; }
    QString mdiCheckboxMultipleBlank() const { return "\uf136"; }
    QString mdiCheckboxMultipleBlankCircle() const { return "\uf63b"; }
    QString mdiCheckboxMultipleBlankCircleOutline() const { return "\uf63c"; }
    QString mdiCheckboxMultipleBlankOutline() const { return "\uf137"; }
    QString mdiCheckboxMultipleMarked() const { return "\uf138"; }
    QString mdiCheckboxMultipleMarkedCircle() const { return "\uf63d"; }
    QString mdiCheckboxMultipleMarkedCircleOutline() const { return "\uf63e"; }
    QString mdiCheckboxMultipleMarkedOutline() const { return "\uf139"; }
    QString mdiCheckerboard() const { return "\uf13a"; }
    QString mdiChemicalWeapon() const { return "\uf13b"; }
    QString mdiChevronDoubleDown() const { return "\uf13c"; }
    QString mdiChevronDoubleLeft() const { return "\uf13d"; }
    QString mdiChevronDoubleRight() const { return "\uf13e"; }
    QString mdiChevronDoubleUp() const { return "\uf13f"; }
    QString mdiChevronDown() const { return "\uf140"; }
    QString mdiChevronLeft() const { return "\uf141"; }
    QString mdiChevronRight() const { return "\uf142"; }
    QString mdiChevronUp() const { return "\uf143"; }
    QString mdiChip() const { return "\uf61a"; }
    QString mdiChurch() const { return "\uf144"; }
    QString mdiCiscoWebex() const { return "\uf145"; }
    QString mdiCity() const { return "\uf146"; }
    QString mdiClipboard() const { return "\uf147"; }
    QString mdiClipboardAccount() const { return "\uf148"; }
    QString mdiClipboardAlert() const { return "\uf149"; }
    QString mdiClipboardArrowDown() const { return "\uf14a"; }
    QString mdiClipboardArrowLeft() const { return "\uf14b"; }
    QString mdiClipboardCheck() const { return "\uf14c"; }
    QString mdiClipboardOutline() const { return "\uf14d"; }
    QString mdiClipboardText() const { return "\uf14e"; }
    QString mdiClippy() const { return "\uf14f"; }
    QString mdiClock() const { return "\uf150"; }
    QString mdiClockAlert() const { return "\uf5ce"; }
    QString mdiClockEnd() const { return "\uf151"; }
    QString mdiClockFast() const { return "\uf152"; }
    QString mdiClockIn() const { return "\uf153"; }
    QString mdiClockOut() const { return "\uf154"; }
    QString mdiClockStart() const { return "\uf155"; }
    QString mdiClose() const { return "\uf156"; }
    QString mdiCloseBox() const { return "\uf157"; }
    QString mdiCloseBoxOutline() const { return "\uf158"; }
    QString mdiCloseCircle() const { return "\uf159"; }
    QString mdiCloseCircleOutline() const { return "\uf15a"; }
    QString mdiCloseNetwork() const { return "\uf15b"; }
    QString mdiCloseOctagon() const { return "\uf15c"; }
    QString mdiCloseOctagonOutline() const { return "\uf15d"; }
    QString mdiClosedCaption() const { return "\uf15e"; }
    QString mdiCloud() const { return "\uf15f"; }
    QString mdiCloudCheck() const { return "\uf160"; }
    QString mdiCloudCircle() const { return "\uf161"; }
    QString mdiCloudDownload() const { return "\uf162"; }
    QString mdiCloudOutline() const { return "\uf163"; }
    QString mdiCloudOutlineOff() const { return "\uf164"; }
    QString mdiCloudPrint() const { return "\uf165"; }
    QString mdiCloudPrintOutline() const { return "\uf166"; }
    QString mdiCloudSync() const { return "\uf63f"; }
    QString mdiCloudUpload() const { return "\uf167"; }
    QString mdiCodeArray() const { return "\uf168"; }
    QString mdiCodeBraces() const { return "\uf169"; }
    QString mdiCodeBrackets() const { return "\uf16a"; }
    QString mdiCodeEqual() const { return "\uf16b"; }
    QString mdiCodeGreaterThan() const { return "\uf16c"; }
    QString mdiCodeGreaterThanOrEqual() const { return "\uf16d"; }
    QString mdiCodeLessThan() const { return "\uf16e"; }
    QString mdiCodeLessThanOrEqual() const { return "\uf16f"; }
    QString mdiCodeNotEqual() const { return "\uf170"; }
    QString mdiCodeNotEqualVariant() const { return "\uf171"; }
    QString mdiCodeParentheses() const { return "\uf172"; }
    QString mdiCodeString() const { return "\uf173"; }
    QString mdiCodeTags() const { return "\uf174"; }
    QString mdiCodeTagsCheck() const { return "\uf693"; }
    QString mdiCodepen() const { return "\uf175"; }
    QString mdiCoffee() const { return "\uf176"; }
    QString mdiCoffeeToGo() const { return "\uf177"; }
    QString mdiCoin() const { return "\uf178"; }
    QString mdiCoins() const { return "\uf694"; }
    QString mdiCollage() const { return "\uf640"; }
    QString mdiColorHelper() const { return "\uf179"; }
    QString mdiComment() const { return "\uf17a"; }
    QString mdiCommentAccount() const { return "\uf17b"; }
    QString mdiCommentAccountOutline() const { return "\uf17c"; }
    QString mdiCommentAlert() const { return "\uf17d"; }
    QString mdiCommentAlertOutline() const { return "\uf17e"; }
    QString mdiCommentCheck() const { return "\uf17f"; }
    QString mdiCommentCheckOutline() const { return "\uf180"; }
    QString mdiCommentMultipleOutline() const { return "\uf181"; }
    QString mdiCommentOutline() const { return "\uf182"; }
    QString mdiCommentPlusOutline() const { return "\uf183"; }
    QString mdiCommentProcessing() const { return "\uf184"; }
    QString mdiCommentProcessingOutline() const { return "\uf185"; }
    QString mdiCommentQuestionOutline() const { return "\uf186"; }
    QString mdiCommentRemoveOutline() const { return "\uf187"; }
    QString mdiCommentText() const { return "\uf188"; }
    QString mdiCommentTextOutline() const { return "\uf189"; }
    QString mdiCompare() const { return "\uf18a"; }
    QString mdiCompass() const { return "\uf18b"; }
    QString mdiCompassOutline() const { return "\uf18c"; }
    QString mdiConsole() const { return "\uf18d"; }
    QString mdiContactMail() const { return "\uf18e"; }
    QString mdiContentCopy() const { return "\uf18f"; }
    QString mdiContentCut() const { return "\uf190"; }
    QString mdiContentDuplicate() const { return "\uf191"; }
    QString mdiContentPaste() const { return "\uf192"; }
    QString mdiContentSave() const { return "\uf193"; }
    QString mdiContentSaveAll() const { return "\uf194"; }
    QString mdiContentSaveSettings() const { return "\uf61b"; }
    QString mdiContrast() const { return "\uf195"; }
    QString mdiContrastBox() const { return "\uf196"; }
    QString mdiContrastCircle() const { return "\uf197"; }
    QString mdiCookie() const { return "\uf198"; }
    QString mdiCopyright() const { return "\uf5e6"; }
    QString mdiCounter() const { return "\uf199"; }
    QString mdiCow() const { return "\uf19a"; }
    QString mdiCreation() const { return "\uf1c9"; }
    QString mdiCreditCard() const { return "\uf19b"; }
    QString mdiCreditCardMultiple() const { return "\uf19c"; }
    QString mdiCreditCardOff() const { return "\uf5e4"; }
    QString mdiCreditCardPlus() const { return "\uf675"; }
    QString mdiCreditCardScan() const { return "\uf19d"; }
    QString mdiCrop() const { return "\uf19e"; }
    QString mdiCropFree() const { return "\uf19f"; }
    QString mdiCropLandscape() const { return "\uf1a0"; }
    QString mdiCropPortrait() const { return "\uf1a1"; }
    QString mdiCropRotate() const { return "\uf695"; }
    QString mdiCropSquare() const { return "\uf1a2"; }
    QString mdiCrosshairs() const { return "\uf1a3"; }
    QString mdiCrosshairsGps() const { return "\uf1a4"; }
    QString mdiCrown() const { return "\uf1a5"; }
    QString mdiCube() const { return "\uf1a6"; }
    QString mdiCubeOutline() const { return "\uf1a7"; }
    QString mdiCubeSend() const { return "\uf1a8"; }
    QString mdiCubeUnfolded() const { return "\uf1a9"; }
    QString mdiCup() const { return "\uf1aa"; }
    QString mdiCupOff() const { return "\uf5e5"; }
    QString mdiCupWater() const { return "\uf1ab"; }
    QString mdiCurrencyBtc() const { return "\uf1ac"; }
    QString mdiCurrencyEur() const { return "\uf1ad"; }
    QString mdiCurrencyGbp() const { return "\uf1ae"; }
    QString mdiCurrencyInr() const { return "\uf1af"; }
    QString mdiCurrencyNgn() const { return "\uf1b0"; }
    QString mdiCurrencyRub() const { return "\uf1b1"; }
    QString mdiCurrencyTry() const { return "\uf1b2"; }
    QString mdiCurrencyUsd() const { return "\uf1b3"; }
    QString mdiCurrencyUsdOff() const { return "\uf679"; }
    QString mdiCursorDefault() const { return "\uf1b4"; }
    QString mdiCursorDefaultOutline() const { return "\uf1b5"; }
    QString mdiCursorMove() const { return "\uf1b6"; }
    QString mdiCursorPointer() const { return "\uf1b7"; }
    QString mdiCursorText() const { return "\uf5e7"; }
    QString mdiDatabase() const { return "\uf1b8"; }
    QString mdiDatabaseMinus() const { return "\uf1b9"; }
    QString mdiDatabasePlus() const { return "\uf1ba"; }
    QString mdiDebugStepInto() const { return "\uf1bb"; }
    QString mdiDebugStepOut() const { return "\uf1bc"; }
    QString mdiDebugStepOver() const { return "\uf1bd"; }
    QString mdiDecimalDecrease() const { return "\uf1be"; }
    QString mdiDecimalIncrease() const { return "\uf1bf"; }
    QString mdiDelete() const { return "\uf1c0"; }
    QString mdiDeleteCircle() const { return "\uf682"; }
    QString mdiDeleteForever() const { return "\uf5e8"; }
    QString mdiDeleteSweep() const { return "\uf5e9"; }
    QString mdiDeleteVariant() const { return "\uf1c1"; }
    QString mdiDelta() const { return "\uf1c2"; }
    QString mdiDeskphone() const { return "\uf1c3"; }
    QString mdiDesktopMac() const { return "\uf1c4"; }
    QString mdiDesktopTower() const { return "\uf1c5"; }
    QString mdiDetails() const { return "\uf1c6"; }
    QString mdiDeveloperBoard() const { return "\uf696"; }
    QString mdiDeviantart() const { return "\uf1c7"; }
    QString mdiDialpad() const { return "\uf61c"; }
    QString mdiDiamond() const { return "\uf1c8"; }
    QString mdiDice1() const { return "\uf1ca"; }
    QString mdiDice2() const { return "\uf1cb"; }
    QString mdiDice3() const { return "\uf1cc"; }
    QString mdiDice4() const { return "\uf1cd"; }
    QString mdiDice5() const { return "\uf1ce"; }
    QString mdiDice6() const { return "\uf1cf"; }
    QString mdiDiceD20() const { return "\uf5ea"; }
    QString mdiDiceD4() const { return "\uf5eb"; }
    QString mdiDiceD6() const { return "\uf5ec"; }
    QString mdiDiceD8() const { return "\uf5ed"; }
    QString mdiDictionary() const { return "\uf61d"; }
    QString mdiDirections() const { return "\uf1d0"; }
    QString mdiDirectionsFork() const { return "\uf641"; }
    QString mdiDiscord() const { return "\uf66f"; }
    QString mdiDisk() const { return "\uf5ee"; }
    QString mdiDiskAlert() const { return "\uf1d1"; }
    QString mdiDisqus() const { return "\uf1d2"; }
    QString mdiDisqusOutline() const { return "\uf1d3"; }
    QString mdiDivision() const { return "\uf1d4"; }
    QString mdiDivisionBox() const { return "\uf1d5"; }
    QString mdiDna() const { return "\uf683"; }
    QString mdiDns() const { return "\uf1d6"; }
    QString mdiDoNotDisturb() const { return "\uf697"; }
    QString mdiDoNotDisturbOff() const { return "\uf698"; }
    QString mdiDolby() const { return "\uf6b2"; }
    QString mdiDomain() const { return "\uf1d7"; }
    QString mdiDotsHorizontal() const { return "\uf1d8"; }
    QString mdiDotsVertical() const { return "\uf1d9"; }
    QString mdiDouban() const { return "\uf699"; }
    QString mdiDownload() const { return "\uf1da"; }
    QString mdiDrag() const { return "\uf1db"; }
    QString mdiDragHorizontal() const { return "\uf1dc"; }
    QString mdiDragVertical() const { return "\uf1dd"; }
    QString mdiDrawing() const { return "\uf1de"; }
    QString mdiDrawingBox() const { return "\uf1df"; }
    QString mdiDribbble() const { return "\uf1e0"; }
    QString mdiDribbbleBox() const { return "\uf1e1"; }
    QString mdiDrone() const { return "\uf1e2"; }
    QString mdiDropbox() const { return "\uf1e3"; }
    QString mdiDrupal() const { return "\uf1e4"; }
    QString mdiDuck() const { return "\uf1e5"; }
    QString mdiDumbbell() const { return "\uf1e6"; }
    QString mdiEarth() const { return "\uf1e7"; }
    QString mdiEarthOff() const { return "\uf1e8"; }
    QString mdiEdge() const { return "\uf1e9"; }
    QString mdiEject() const { return "\uf1ea"; }
    QString mdiElevationDecline() const { return "\uf1eb"; }
    QString mdiElevationRise() const { return "\uf1ec"; }
    QString mdiElevator() const { return "\uf1ed"; }
    QString mdiEmail() const { return "\uf1ee"; }
    QString mdiEmailOpen() const { return "\uf1ef"; }
    QString mdiEmailOpenOutline() const { return "\uf5ef"; }
    QString mdiEmailOutline() const { return "\uf1f0"; }
    QString mdiEmailSecure() const { return "\uf1f1"; }
    QString mdiEmailVariant() const { return "\uf5f0"; }
    QString mdiEmby() const { return "\uf6b3"; }
    QString mdiEmoticon() const { return "\uf1f2"; }
    QString mdiEmoticonCool() const { return "\uf1f3"; }
    QString mdiEmoticonDead() const { return "\uf69a"; }
    QString mdiEmoticonDevil() const { return "\uf1f4"; }
    QString mdiEmoticonExcited() const { return "\uf69b"; }
    QString mdiEmoticonHappy() const { return "\uf1f5"; }
    QString mdiEmoticonNeutral() const { return "\uf1f6"; }
    QString mdiEmoticonPoop() const { return "\uf1f7"; }
    QString mdiEmoticonSad() const { return "\uf1f8"; }
    QString mdiEmoticonTongue() const { return "\uf1f9"; }
    QString mdiEngine() const { return "\uf1fa"; }
    QString mdiEngineOutline() const { return "\uf1fb"; }
    QString mdiEqual() const { return "\uf1fc"; }
    QString mdiEqualBox() const { return "\uf1fd"; }
    QString mdiEraser() const { return "\uf1fe"; }
    QString mdiEraserVariant() const { return "\uf642"; }
    QString mdiEscalator() const { return "\uf1ff"; }
    QString mdiEthernet() const { return "\uf200"; }
    QString mdiEthernetCable() const { return "\uf201"; }
    QString mdiEthernetCableOff() const { return "\uf202"; }
    QString mdiEtsy() const { return "\uf203"; }
    QString mdiEvStation() const { return "\uf5f1"; }
    QString mdiEvernote() const { return "\uf204"; }
    QString mdiExclamation() const { return "\uf205"; }
    QString mdiExitToApp() const { return "\uf206"; }
    QString mdiExport() const { return "\uf207"; }
    QString mdiEye() const { return "\uf208"; }
    QString mdiEyeOff() const { return "\uf209"; }
    QString mdiEyedropper() const { return "\uf20a"; }
    QString mdiEyedropperVariant() const { return "\uf20b"; }
    QString mdiFace() const { return "\uf643"; }
    QString mdiFaceProfile() const { return "\uf644"; }
    QString mdiFacebook() const { return "\uf20c"; }
    QString mdiFacebookBox() const { return "\uf20d"; }
    QString mdiFacebookMessenger() const { return "\uf20e"; }
    QString mdiFactory() const { return "\uf20f"; }
    QString mdiFan() const { return "\uf210"; }
    QString mdiFastForward() const { return "\uf211"; }
    QString mdiFax() const { return "\uf212"; }
    QString mdiFerry() const { return "\uf213"; }
    QString mdiFile() const { return "\uf214"; }
    QString mdiFileChart() const { return "\uf215"; }
    QString mdiFileCheck() const { return "\uf216"; }
    QString mdiFileCloud() const { return "\uf217"; }
    QString mdiFileDelimited() const { return "\uf218"; }
    QString mdiFileDocument() const { return "\uf219"; }
    QString mdiFileDocumentBox() const { return "\uf21a"; }
    QString mdiFileExcel() const { return "\uf21b"; }
    QString mdiFileExcelBox() const { return "\uf21c"; }
    QString mdiFileExport() const { return "\uf21d"; }
    QString mdiFileFind() const { return "\uf21e"; }
    QString mdiFileHidden() const { return "\uf613"; }
    QString mdiFileImage() const { return "\uf21f"; }
    QString mdiFileImport() const { return "\uf220"; }
    QString mdiFileLock() const { return "\uf221"; }
    QString mdiFileMultiple() const { return "\uf222"; }
    QString mdiFileMusic() const { return "\uf223"; }
    QString mdiFileOutline() const { return "\uf224"; }
    QString mdiFilePdf() const { return "\uf225"; }
    QString mdiFilePdfBox() const { return "\uf226"; }
    QString mdiFilePowerpoint() const { return "\uf227"; }
    QString mdiFilePowerpointBox() const { return "\uf228"; }
    QString mdiFilePresentationBox() const { return "\uf229"; }
    QString mdiFileRestore() const { return "\uf670"; }
    QString mdiFileSend() const { return "\uf22a"; }
    QString mdiFileTree() const { return "\uf645"; }
    QString mdiFileVideo() const { return "\uf22b"; }
    QString mdiFileWord() const { return "\uf22c"; }
    QString mdiFileWordBox() const { return "\uf22d"; }
    QString mdiFileXml() const { return "\uf22e"; }
    QString mdiFilm() const { return "\uf22f"; }
    QString mdiFilmstrip() const { return "\uf230"; }
    QString mdiFilmstripOff() const { return "\uf231"; }
    QString mdiFilter() const { return "\uf232"; }
    QString mdiFilterOutline() const { return "\uf233"; }
    QString mdiFilterRemove() const { return "\uf234"; }
    QString mdiFilterRemoveOutline() const { return "\uf235"; }
    QString mdiFilterVariant() const { return "\uf236"; }
    QString mdiFingerprint() const { return "\uf237"; }
    QString mdiFire() const { return "\uf238"; }
    QString mdiFirefox() const { return "\uf239"; }
    QString mdiFish() const { return "\uf23a"; }
    QString mdiFlag() const { return "\uf23b"; }
    QString mdiFlagCheckered() const { return "\uf23c"; }
    QString mdiFlagOutline() const { return "\uf23d"; }
    QString mdiFlagOutlineVariant() const { return "\uf23e"; }
    QString mdiFlagTriangle() const { return "\uf23f"; }
    QString mdiFlagVariant() const { return "\uf240"; }
    QString mdiFlash() const { return "\uf241"; }
    QString mdiFlashAuto() const { return "\uf242"; }
    QString mdiFlashOff() const { return "\uf243"; }
    QString mdiFlashRedEye() const { return "\uf67a"; }
    QString mdiFlashlight() const { return "\uf244"; }
    QString mdiFlashlightOff() const { return "\uf245"; }
    QString mdiFlask() const { return "\uf093"; }
    QString mdiFlaskEmpty() const { return "\uf094"; }
    QString mdiFlaskEmptyOutline() const { return "\uf095"; }
    QString mdiFlaskOutline() const { return "\uf096"; }
    QString mdiFlattr() const { return "\uf246"; }
    QString mdiFlipToBack() const { return "\uf247"; }
    QString mdiFlipToFront() const { return "\uf248"; }
    QString mdiFloppy() const { return "\uf249"; }
    QString mdiFlower() const { return "\uf24a"; }
    QString mdiFolder() const { return "\uf24b"; }
    QString mdiFolderAccount() const { return "\uf24c"; }
    QString mdiFolderDownload() const { return "\uf24d"; }
    QString mdiFolderGoogleDrive() const { return "\uf24e"; }
    QString mdiFolderImage() const { return "\uf24f"; }
    QString mdiFolderLock() const { return "\uf250"; }
    QString mdiFolderLockOpen() const { return "\uf251"; }
    QString mdiFolderMove() const { return "\uf252"; }
    QString mdiFolderMultiple() const { return "\uf253"; }
    QString mdiFolderMultipleImage() const { return "\uf254"; }
    QString mdiFolderMultipleOutline() const { return "\uf255"; }
    QString mdiFolderOutline() const { return "\uf256"; }
    QString mdiFolderPlus() const { return "\uf257"; }
    QString mdiFolderRemove() const { return "\uf258"; }
    QString mdiFolderStar() const { return "\uf69c"; }
    QString mdiFolderUpload() const { return "\uf259"; }
    QString mdiFood() const { return "\uf25a"; }
    QString mdiFoodApple() const { return "\uf25b"; }
    QString mdiFoodForkDrink() const { return "\uf5f2"; }
    QString mdiFoodOff() const { return "\uf5f3"; }
    QString mdiFoodVariant() const { return "\uf25c"; }
    QString mdiFootball() const { return "\uf25d"; }
    QString mdiFootballAustralian() const { return "\uf25e"; }
    QString mdiFootballHelmet() const { return "\uf25f"; }
    QString mdiFormatAlignCenter() const { return "\uf260"; }
    QString mdiFormatAlignJustify() const { return "\uf261"; }
    QString mdiFormatAlignLeft() const { return "\uf262"; }
    QString mdiFormatAlignRight() const { return "\uf263"; }
    QString mdiFormatAnnotationPlus() const { return "\uf646"; }
    QString mdiFormatBold() const { return "\uf264"; }
    QString mdiFormatClear() const { return "\uf265"; }
    QString mdiFormatColorFill() const { return "\uf266"; }
    QString mdiFormatColorText() const { return "\uf69d"; }
    QString mdiFormatFloatCenter() const { return "\uf267"; }
    QString mdiFormatFloatLeft() const { return "\uf268"; }
    QString mdiFormatFloatNone() const { return "\uf269"; }
    QString mdiFormatFloatRight() const { return "\uf26a"; }
    QString mdiFormatHeader1() const { return "\uf26b"; }
    QString mdiFormatHeader2() const { return "\uf26c"; }
    QString mdiFormatHeader3() const { return "\uf26d"; }
    QString mdiFormatHeader4() const { return "\uf26e"; }
    QString mdiFormatHeader5() const { return "\uf26f"; }
    QString mdiFormatHeader6() const { return "\uf270"; }
    QString mdiFormatHeaderDecrease() const { return "\uf271"; }
    QString mdiFormatHeaderEqual() const { return "\uf272"; }
    QString mdiFormatHeaderIncrease() const { return "\uf273"; }
    QString mdiFormatHeaderPound() const { return "\uf274"; }
    QString mdiFormatHorizontalAlignCenter() const { return "\uf61e"; }
    QString mdiFormatHorizontalAlignLeft() const { return "\uf61f"; }
    QString mdiFormatHorizontalAlignRight() const { return "\uf620"; }
    QString mdiFormatIndentDecrease() const { return "\uf275"; }
    QString mdiFormatIndentIncrease() const { return "\uf276"; }
    QString mdiFormatItalic() const { return "\uf277"; }
    QString mdiFormatLineSpacing() const { return "\uf278"; }
    QString mdiFormatLineStyle() const { return "\uf5c8"; }
    QString mdiFormatLineWeight() const { return "\uf5c9"; }
    QString mdiFormatListBulleted() const { return "\uf279"; }
    QString mdiFormatListBulletedType() const { return "\uf27a"; }
    QString mdiFormatListNumbers() const { return "\uf27b"; }
    QString mdiFormatPaint() const { return "\uf27c"; }
    QString mdiFormatParagraph() const { return "\uf27d"; }
    QString mdiFormatQuote() const { return "\uf27e"; }
    QString mdiFormatSection() const { return "\uf69e"; }
    QString mdiFormatSize() const { return "\uf27f"; }
    QString mdiFormatStrikethrough() const { return "\uf280"; }
    QString mdiFormatStrikethroughVariant() const { return "\uf281"; }
    QString mdiFormatSubscript() const { return "\uf282"; }
    QString mdiFormatSuperscript() const { return "\uf283"; }
    QString mdiFormatText() const { return "\uf284"; }
    QString mdiFormatTextdirectionLToR() const { return "\uf285"; }
    QString mdiFormatTextdirectionRToL() const { return "\uf286"; }
    QString mdiFormatTitle() const { return "\uf5f4"; }
    QString mdiFormatUnderline() const { return "\uf287"; }
    QString mdiFormatVerticalAlignBottom() const { return "\uf621"; }
    QString mdiFormatVerticalAlignCenter() const { return "\uf622"; }
    QString mdiFormatVerticalAlignTop() const { return "\uf623"; }
    QString mdiFormatWrapInline() const { return "\uf288"; }
    QString mdiFormatWrapSquare() const { return "\uf289"; }
    QString mdiFormatWrapTight() const { return "\uf28a"; }
    QString mdiFormatWrapTopBottom() const { return "\uf28b"; }
    QString mdiForum() const { return "\uf28c"; }
    QString mdiForward() const { return "\uf28d"; }
    QString mdiFoursquare() const { return "\uf28e"; }
    QString mdiFridge() const { return "\uf28f"; }
    QString mdiFridgeFilled() const { return "\uf290"; }
    QString mdiFridgeFilledBottom() const { return "\uf291"; }
    QString mdiFridgeFilledTop() const { return "\uf292"; }
    QString mdiFullscreen() const { return "\uf293"; }
    QString mdiFullscreenExit() const { return "\uf294"; }
    QString mdiFunction() const { return "\uf295"; }
    QString mdiGamepad() const { return "\uf296"; }
    QString mdiGamepadVariant() const { return "\uf297"; }
    QString mdiGasCylinder() const { return "\uf647"; }
    QString mdiGasStation() const { return "\uf298"; }
    QString mdiGate() const { return "\uf299"; }
    QString mdiGauge() const { return "\uf29a"; }
    QString mdiGavel() const { return "\uf29b"; }
    QString mdiGenderFemale() const { return "\uf29c"; }
    QString mdiGenderMale() const { return "\uf29d"; }
    QString mdiGenderMaleFemale() const { return "\uf29e"; }
    QString mdiGenderTransgender() const { return "\uf29f"; }
    QString mdiGhost() const { return "\uf2a0"; }
    QString mdiGift() const { return "\uf2a1"; }
    QString mdiGit() const { return "\uf2a2"; }
    QString mdiGithubBox() const { return "\uf2a3"; }
    QString mdiGithubCircle() const { return "\uf2a4"; }
    QString mdiGlassFlute() const { return "\uf2a5"; }
    QString mdiGlassMug() const { return "\uf2a6"; }
    QString mdiGlassStange() const { return "\uf2a7"; }
    QString mdiGlassTulip() const { return "\uf2a8"; }
    QString mdiGlassdoor() const { return "\uf2a9"; }
    QString mdiGlasses() const { return "\uf2aa"; }
    QString mdiGmail() const { return "\uf2ab"; }
    QString mdiGnome() const { return "\uf2ac"; }
    QString mdiGondola() const { return "\uf685"; }
    QString mdiGoogle() const { return "\uf2ad"; }
    QString mdiGoogleCardboard() const { return "\uf2ae"; }
    QString mdiGoogleChrome() const { return "\uf2af"; }
    QString mdiGoogleCircles() const { return "\uf2b0"; }
    QString mdiGoogleCirclesCommunities() const { return "\uf2b1"; }
    QString mdiGoogleCirclesExtended() const { return "\uf2b2"; }
    QString mdiGoogleCirclesGroup() const { return "\uf2b3"; }
    QString mdiGoogleController() const { return "\uf2b4"; }
    QString mdiGoogleControllerOff() const { return "\uf2b5"; }
    QString mdiGoogleDrive() const { return "\uf2b6"; }
    QString mdiGoogleEarth() const { return "\uf2b7"; }
    QString mdiGoogleGlass() const { return "\uf2b8"; }
    QString mdiGoogleMaps() const { return "\uf5f5"; }
    QString mdiGoogleNearby() const { return "\uf2b9"; }
    QString mdiGooglePages() const { return "\uf2ba"; }
    QString mdiGooglePhysicalWeb() const { return "\uf2bb"; }
    QString mdiGooglePlay() const { return "\uf2bc"; }
    QString mdiGooglePlus() const { return "\uf2bd"; }
    QString mdiGooglePlusBox() const { return "\uf2be"; }
    QString mdiGoogleTranslate() const { return "\uf2bf"; }
    QString mdiGoogleWallet() const { return "\uf2c0"; }
    QString mdiGradient() const { return "\uf69f"; }
    QString mdiGreasePencil() const { return "\uf648"; }
    QString mdiGrid() const { return "\uf2c1"; }
    QString mdiGridOff() const { return "\uf2c2"; }
    QString mdiGroup() const { return "\uf2c3"; }
    QString mdiGuitarElectric() const { return "\uf2c4"; }
    QString mdiGuitarPick() const { return "\uf2c5"; }
    QString mdiGuitarPickOutline() const { return "\uf2c6"; }
    QString mdiHackernews() const { return "\uf624"; }
    QString mdiHamburger() const { return "\uf684"; }
    QString mdiHandPointingRight() const { return "\uf2c7"; }
    QString mdiHanger() const { return "\uf2c8"; }
    QString mdiHangouts() const { return "\uf2c9"; }
    QString mdiHarddisk() const { return "\uf2ca"; }
    QString mdiHeadphones() const { return "\uf2cb"; }
    QString mdiHeadphonesBox() const { return "\uf2cc"; }
    QString mdiHeadphonesSettings() const { return "\uf2cd"; }
    QString mdiHeadset() const { return "\uf2ce"; }
    QString mdiHeadsetDock() const { return "\uf2cf"; }
    QString mdiHeadsetOff() const { return "\uf2d0"; }
    QString mdiHeart() const { return "\uf2d1"; }
    QString mdiHeartBox() const { return "\uf2d2"; }
    QString mdiHeartBoxOutline() const { return "\uf2d3"; }
    QString mdiHeartBroken() const { return "\uf2d4"; }
    QString mdiHeartOutline() const { return "\uf2d5"; }
    QString mdiHeartPulse() const { return "\uf5f6"; }
    QString mdiHelp() const { return "\uf2d6"; }
    QString mdiHelpCircle() const { return "\uf2d7"; }
    QString mdiHelpCircleOutline() const { return "\uf625"; }
    QString mdiHexagon() const { return "\uf2d8"; }
    QString mdiHexagonOutline() const { return "\uf2d9"; }
    QString mdiHighway() const { return "\uf5f7"; }
    QString mdiHistory() const { return "\uf2da"; }
    QString mdiHololens() const { return "\uf2db"; }
    QString mdiHome() const { return "\uf2dc"; }
    QString mdiHomeMapMarker() const { return "\uf5f8"; }
    QString mdiHomeModern() const { return "\uf2dd"; }
    QString mdiHomeOutline() const { return "\uf6a0"; }
    QString mdiHomeVariant() const { return "\uf2de"; }
    QString mdiHops() const { return "\uf2df"; }
    QString mdiHospital() const { return "\uf2e0"; }
    QString mdiHospitalBuilding() const { return "\uf2e1"; }
    QString mdiHospitalMarker() const { return "\uf2e2"; }
    QString mdiHotel() const { return "\uf2e3"; }
    QString mdiHouzz() const { return "\uf2e4"; }
    QString mdiHouzzBox() const { return "\uf2e5"; }
    QString mdiHuman() const { return "\uf2e6"; }
    QString mdiHumanChild() const { return "\uf2e7"; }
    QString mdiHumanFemale() const { return "\uf649"; }
    QString mdiHumanGreeting() const { return "\uf64a"; }
    QString mdiHumanHandsdown() const { return "\uf64b"; }
    QString mdiHumanHandsup() const { return "\uf64c"; }
    QString mdiHumanMale() const { return "\uf64d"; }
    QString mdiHumanMaleFemale() const { return "\uf2e8"; }
    QString mdiHumanPregnant() const { return "\uf5cf"; }
    QString mdiImage() const { return "\uf2e9"; }
    QString mdiImageAlbum() const { return "\uf2ea"; }
    QString mdiImageArea() const { return "\uf2eb"; }
    QString mdiImageAreaClose() const { return "\uf2ec"; }
    QString mdiImageBroken() const { return "\uf2ed"; }
    QString mdiImageBrokenVariant() const { return "\uf2ee"; }
    QString mdiImageFilter() const { return "\uf2ef"; }
    QString mdiImageFilterBlackWhite() const { return "\uf2f0"; }
    QString mdiImageFilterCenterFocus() const { return "\uf2f1"; }
    QString mdiImageFilterCenterFocusWeak() const { return "\uf2f2"; }
    QString mdiImageFilterDrama() const { return "\uf2f3"; }
    QString mdiImageFilterFrames() const { return "\uf2f4"; }
    QString mdiImageFilterHdr() const { return "\uf2f5"; }
    QString mdiImageFilterNone() const { return "\uf2f6"; }
    QString mdiImageFilterTiltShift() const { return "\uf2f7"; }
    QString mdiImageFilterVintage() const { return "\uf2f8"; }
    QString mdiImageMultiple() const { return "\uf2f9"; }
    QString mdiImport() const { return "\uf2fa"; }
    QString mdiInbox() const { return "\uf686"; }
    QString mdiInboxArrowDown() const { return "\uf2fb"; }
    QString mdiInboxArrowUp() const { return "\uf3d1"; }
    QString mdiIncognito() const { return "\uf5f9"; }
    QString mdiInformation() const { return "\uf2fc"; }
    QString mdiInformationOutline() const { return "\uf2fd"; }
    QString mdiInformationVariant() const { return "\uf64e"; }
    QString mdiInstagram() const { return "\uf2fe"; }
    QString mdiInstapaper() const { return "\uf2ff"; }
    QString mdiInternetExplorer() const { return "\uf300"; }
    QString mdiInvertColors() const { return "\uf301"; }
    QString mdiItunes() const { return "\uf676"; }
    QString mdiJeepney() const { return "\uf302"; }
    QString mdiJira() const { return "\uf303"; }
    QString mdiJsfiddle() const { return "\uf304"; }
    QString mdiJson() const { return "\uf626"; }
    QString mdiKeg() const { return "\uf305"; }
    QString mdiKettle() const { return "\uf5fa"; }
    QString mdiKey() const { return "\uf306"; }
    QString mdiKeyChange() const { return "\uf307"; }
    QString mdiKeyMinus() const { return "\uf308"; }
    QString mdiKeyPlus() const { return "\uf309"; }
    QString mdiKeyRemove() const { return "\uf30a"; }
    QString mdiKeyVariant() const { return "\uf30b"; }
    QString mdiKeyboard() const { return "\uf30c"; }
    QString mdiKeyboardBackspace() const { return "\uf30d"; }
    QString mdiKeyboardCaps() const { return "\uf30e"; }
    QString mdiKeyboardClose() const { return "\uf30f"; }
    QString mdiKeyboardOff() const { return "\uf310"; }
    QString mdiKeyboardReturn() const { return "\uf311"; }
    QString mdiKeyboardTab() const { return "\uf312"; }
    QString mdiKeyboardVariant() const { return "\uf313"; }
    QString mdiKodi() const { return "\uf314"; }
    QString mdiLabel() const { return "\uf315"; }
    QString mdiLabelOutline() const { return "\uf316"; }
    QString mdiLambda() const { return "\uf627"; }
    QString mdiLamp() const { return "\uf6b4"; }
    QString mdiLan() const { return "\uf317"; }
    QString mdiLanConnect() const { return "\uf318"; }
    QString mdiLanDisconnect() const { return "\uf319"; }
    QString mdiLanPending() const { return "\uf31a"; }
    QString mdiLanguageC() const { return "\uf671"; }
    QString mdiLanguageCpp() const { return "\uf672"; }
    QString mdiLanguageCsharp() const { return "\uf31b"; }
    QString mdiLanguageCss3() const { return "\uf31c"; }
    QString mdiLanguageHtml5() const { return "\uf31d"; }
    QString mdiLanguageJavascript() const { return "\uf31e"; }
    QString mdiLanguagePhp() const { return "\uf31f"; }
    QString mdiLanguagePython() const { return "\uf320"; }
    QString mdiLanguagePythonText() const { return "\uf321"; }
    QString mdiLaptop() const { return "\uf322"; }
    QString mdiLaptopChromebook() const { return "\uf323"; }
    QString mdiLaptopMac() const { return "\uf324"; }
    QString mdiLaptopWindows() const { return "\uf325"; }
    QString mdiLastfm() const { return "\uf326"; }
    QString mdiLaunch() const { return "\uf327"; }
    QString mdiLayers() const { return "\uf328"; }
    QString mdiLayersOff() const { return "\uf329"; }
    QString mdiLeadPencil() const { return "\uf64f"; }
    QString mdiLeaf() const { return "\uf32a"; }
    QString mdiLedOff() const { return "\uf32b"; }
    QString mdiLedOn() const { return "\uf32c"; }
    QString mdiLedOutline() const { return "\uf32d"; }
    QString mdiLedVariantOff() const { return "\uf32e"; }
    QString mdiLedVariantOn() const { return "\uf32f"; }
    QString mdiLedVariantOutline() const { return "\uf330"; }
    QString mdiLibrary() const { return "\uf331"; }
    QString mdiLibraryBooks() const { return "\uf332"; }
    QString mdiLibraryMusic() const { return "\uf333"; }
    QString mdiLibraryPlus() const { return "\uf334"; }
    QString mdiLightbulb() const { return "\uf335"; }
    QString mdiLightbulbOutline() const { return "\uf336"; }
    QString mdiLink() const { return "\uf337"; }
    QString mdiLinkOff() const { return "\uf338"; }
    QString mdiLinkVariant() const { return "\uf339"; }
    QString mdiLinkVariantOff() const { return "\uf33a"; }
    QString mdiLinkedin() const { return "\uf33b"; }
    QString mdiLinkedinBox() const { return "\uf33c"; }
    QString mdiLinux() const { return "\uf33d"; }
    QString mdiLock() const { return "\uf33e"; }
    QString mdiLockOpen() const { return "\uf33f"; }
    QString mdiLockOpenOutline() const { return "\uf340"; }
    QString mdiLockOutline() const { return "\uf341"; }
    QString mdiLockPlus() const { return "\uf5fb"; }
    QString mdiLogin() const { return "\uf342"; }
    QString mdiLoginVariant() const { return "\uf5fc"; }
    QString mdiLogout() const { return "\uf343"; }
    QString mdiLogoutVariant() const { return "\uf5fd"; }
    QString mdiLooks() const { return "\uf344"; }
    QString mdiLoupe() const { return "\uf345"; }
    QString mdiLumx() const { return "\uf346"; }
    QString mdiMagnet() const { return "\uf347"; }
    QString mdiMagnetOn() const { return "\uf348"; }
    QString mdiMagnify() const { return "\uf349"; }
    QString mdiMagnifyMinus() const { return "\uf34a"; }
    QString mdiMagnifyPlus() const { return "\uf34b"; }
    QString mdiMailRu() const { return "\uf34c"; }
    QString mdiMap() const { return "\uf34d"; }
    QString mdiMapMarker() const { return "\uf34e"; }
    QString mdiMapMarkerCircle() const { return "\uf34f"; }
    QString mdiMapMarkerMinus() const { return "\uf650"; }
    QString mdiMapMarkerMultiple() const { return "\uf350"; }
    QString mdiMapMarkerOff() const { return "\uf351"; }
    QString mdiMapMarkerPlus() const { return "\uf651"; }
    QString mdiMapMarkerRadius() const { return "\uf352"; }
    QString mdiMargin() const { return "\uf353"; }
    QString mdiMarkdown() const { return "\uf354"; }
    QString mdiMarker() const { return "\uf652"; }
    QString mdiMarkerCheck() const { return "\uf355"; }
    QString mdiMartini() const { return "\uf356"; }
    QString mdiMaterialUi() const { return "\uf357"; }
    QString mdiMathCompass() const { return "\uf358"; }
    QString mdiMatrix() const { return "\uf628"; }
    QString mdiMaxcdn() const { return "\uf359"; }
    QString mdiMedium() const { return "\uf35a"; }
    QString mdiMemory() const { return "\uf35b"; }
    QString mdiMenu() const { return "\uf35c"; }
    QString mdiMenuDown() const { return "\uf35d"; }
    QString mdiMenuDownOutline() const { return "\uf6b5"; }
    QString mdiMenuLeft() const { return "\uf35e"; }
    QString mdiMenuRight() const { return "\uf35f"; }
    QString mdiMenuUp() const { return "\uf360"; }
    QString mdiMenuUpOutline() const { return "\uf6b6"; }
    QString mdiMessage() const { return "\uf361"; }
    QString mdiMessageAlert() const { return "\uf362"; }
    QString mdiMessageBulleted() const { return "\uf6a1"; }
    QString mdiMessageBulletedOff() const { return "\uf6a2"; }
    QString mdiMessageDraw() const { return "\uf363"; }
    QString mdiMessageImage() const { return "\uf364"; }
    QString mdiMessageOutline() const { return "\uf365"; }
    QString mdiMessagePlus() const { return "\uf653"; }
    QString mdiMessageProcessing() const { return "\uf366"; }
    QString mdiMessageReply() const { return "\uf367"; }
    QString mdiMessageReplyText() const { return "\uf368"; }
    QString mdiMessageText() const { return "\uf369"; }
    QString mdiMessageTextOutline() const { return "\uf36a"; }
    QString mdiMessageVideo() const { return "\uf36b"; }
    QString mdiMeteor() const { return "\uf629"; }
    QString mdiMicrophone() const { return "\uf36c"; }
    QString mdiMicrophoneOff() const { return "\uf36d"; }
    QString mdiMicrophoneOutline() const { return "\uf36e"; }
    QString mdiMicrophoneSettings() const { return "\uf36f"; }
    QString mdiMicrophoneVariant() const { return "\uf370"; }
    QString mdiMicrophoneVariantOff() const { return "\uf371"; }
    QString mdiMicroscope() const { return "\uf654"; }
    QString mdiMicrosoft() const { return "\uf372"; }
    QString mdiMinecraft() const { return "\uf373"; }
    QString mdiMinus() const { return "\uf374"; }
    QString mdiMinusBox() const { return "\uf375"; }
    QString mdiMinusCircle() const { return "\uf376"; }
    QString mdiMinusCircleOutline() const { return "\uf377"; }
    QString mdiMinusNetwork() const { return "\uf378"; }
    QString mdiMixcloud() const { return "\uf62a"; }
    QString mdiMonitor() const { return "\uf379"; }
    QString mdiMonitorMultiple() const { return "\uf37a"; }
    QString mdiMore() const { return "\uf37b"; }
    QString mdiMotorbike() const { return "\uf37c"; }
    QString mdiMouse() const { return "\uf37d"; }
    QString mdiMouseOff() const { return "\uf37e"; }
    QString mdiMouseVariant() const { return "\uf37f"; }
    QString mdiMouseVariantOff() const { return "\uf380"; }
    QString mdiMoveResize() const { return "\uf655"; }
    QString mdiMoveResizeVariant() const { return "\uf656"; }
    QString mdiMovie() const { return "\uf381"; }
    QString mdiMultiplication() const { return "\uf382"; }
    QString mdiMultiplicationBox() const { return "\uf383"; }
    QString mdiMusicBox() const { return "\uf384"; }
    QString mdiMusicBoxOutline() const { return "\uf385"; }
    QString mdiMusicCircle() const { return "\uf386"; }
    QString mdiMusicNote() const { return "\uf387"; }
    QString mdiMusicNoteBluetooth() const { return "\uf5fe"; }
    QString mdiMusicNoteBluetoothOff() const { return "\uf5ff"; }
    QString mdiMusicNoteEighth() const { return "\uf388"; }
    QString mdiMusicNoteHalf() const { return "\uf389"; }
    QString mdiMusicNoteOff() const { return "\uf38a"; }
    QString mdiMusicNoteQuarter() const { return "\uf38b"; }
    QString mdiMusicNoteSixteenth() const { return "\uf38c"; }
    QString mdiMusicNoteWhole() const { return "\uf38d"; }
    QString mdiNature() const { return "\uf38e"; }
    QString mdiNaturePeople() const { return "\uf38f"; }
    QString mdiNavigation() const { return "\uf390"; }
    QString mdiNearMe() const { return "\uf5cd"; }
    QString mdiNeedle() const { return "\uf391"; }
    QString mdiNestProtect() const { return "\uf392"; }
    QString mdiNestThermostat() const { return "\uf393"; }
    QString mdiNewBox() const { return "\uf394"; }
    QString mdiNewspaper() const { return "\uf395"; }
    QString mdiNfc() const { return "\uf396"; }
    QString mdiNfcTap() const { return "\uf397"; }
    QString mdiNfcVariant() const { return "\uf398"; }
    QString mdiNodejs() const { return "\uf399"; }
    QString mdiNote() const { return "\uf39a"; }
    QString mdiNoteMultiple() const { return "\uf6b7"; }
    QString mdiNoteMultipleOutline() const { return "\uf6b8"; }
    QString mdiNoteOutline() const { return "\uf39b"; }
    QString mdiNotePlus() const { return "\uf39c"; }
    QString mdiNotePlusOutline() const { return "\uf39d"; }
    QString mdiNoteText() const { return "\uf39e"; }
    QString mdiNotificationClearAll() const { return "\uf39f"; }
    QString mdiNuke() const { return "\uf6a3"; }
    QString mdiNumeric() const { return "\uf3a0"; }
    QString mdiNumeric0Box() const { return "\uf3a1"; }
    QString mdiNumeric0BoxMultipleOutline() const { return "\uf3a2"; }
    QString mdiNumeric0BoxOutline() const { return "\uf3a3"; }
    QString mdiNumeric1Box() const { return "\uf3a4"; }
    QString mdiNumeric1BoxMultipleOutline() const { return "\uf3a5"; }
    QString mdiNumeric1BoxOutline() const { return "\uf3a6"; }
    QString mdiNumeric2Box() const { return "\uf3a7"; }
    QString mdiNumeric2BoxMultipleOutline() const { return "\uf3a8"; }
    QString mdiNumeric2BoxOutline() const { return "\uf3a9"; }
    QString mdiNumeric3Box() const { return "\uf3aa"; }
    QString mdiNumeric3BoxMultipleOutline() const { return "\uf3ab"; }
    QString mdiNumeric3BoxOutline() const { return "\uf3ac"; }
    QString mdiNumeric4Box() const { return "\uf3ad"; }
    QString mdiNumeric4BoxMultipleOutline() const { return "\uf3ae"; }
    QString mdiNumeric4BoxOutline() const { return "\uf3af"; }
    QString mdiNumeric5Box() const { return "\uf3b0"; }
    QString mdiNumeric5BoxMultipleOutline() const { return "\uf3b1"; }
    QString mdiNumeric5BoxOutline() const { return "\uf3b2"; }
    QString mdiNumeric6Box() const { return "\uf3b3"; }
    QString mdiNumeric6BoxMultipleOutline() const { return "\uf3b4"; }
    QString mdiNumeric6BoxOutline() const { return "\uf3b5"; }
    QString mdiNumeric7Box() const { return "\uf3b6"; }
    QString mdiNumeric7BoxMultipleOutline() const { return "\uf3b7"; }
    QString mdiNumeric7BoxOutline() const { return "\uf3b8"; }
    QString mdiNumeric8Box() const { return "\uf3b9"; }
    QString mdiNumeric8BoxMultipleOutline() const { return "\uf3ba"; }
    QString mdiNumeric8BoxOutline() const { return "\uf3bb"; }
    QString mdiNumeric9Box() const { return "\uf3bc"; }
    QString mdiNumeric9BoxMultipleOutline() const { return "\uf3bd"; }
    QString mdiNumeric9BoxOutline() const { return "\uf3be"; }
    QString mdiNumeric9PlusBox() const { return "\uf3bf"; }
    QString mdiNumeric9PlusBoxMultipleOutline() const { return "\uf3c0"; }
    QString mdiNumeric9PlusBoxOutline() const { return "\uf3c1"; }
    QString mdiNutrition() const { return "\uf3c2"; }
    QString mdiOar() const { return "\uf67b"; }
    QString mdiOctagon() const { return "\uf3c3"; }
    QString mdiOctagonOutline() const { return "\uf3c4"; }
    QString mdiOdnoklassniki() const { return "\uf3c5"; }
    QString mdiOffice() const { return "\uf3c6"; }
    QString mdiOil() const { return "\uf3c7"; }
    QString mdiOilTemperature() const { return "\uf3c8"; }
    QString mdiOmega() const { return "\uf3c9"; }
    QString mdiOnedrive() const { return "\uf3ca"; }
    QString mdiOpacity() const { return "\uf5cc"; }
    QString mdiOpenInApp() const { return "\uf3cb"; }
    QString mdiOpenInNew() const { return "\uf3cc"; }
    QString mdiOpenid() const { return "\uf3cd"; }
    QString mdiOpera() const { return "\uf3ce"; }
    QString mdiOrnament() const { return "\uf3cf"; }
    QString mdiOrnamentVariant() const { return "\uf3d0"; }
    QString mdiOwl() const { return "\uf3d2"; }
    QString mdiPackage() const { return "\uf3d3"; }
    QString mdiPackageDown() const { return "\uf3d4"; }
    QString mdiPackageUp() const { return "\uf3d5"; }
    QString mdiPackageVariant() const { return "\uf3d6"; }
    QString mdiPackageVariantClosed() const { return "\uf3d7"; }
    QString mdiPageFirst() const { return "\uf600"; }
    QString mdiPageLast() const { return "\uf601"; }
    QString mdiPalette() const { return "\uf3d8"; }
    QString mdiPaletteAdvanced() const { return "\uf3d9"; }
    QString mdiPanda() const { return "\uf3da"; }
    QString mdiPandora() const { return "\uf3db"; }
    QString mdiPanorama() const { return "\uf3dc"; }
    QString mdiPanoramaFisheye() const { return "\uf3dd"; }
    QString mdiPanoramaHorizontal() const { return "\uf3de"; }
    QString mdiPanoramaVertical() const { return "\uf3df"; }
    QString mdiPanoramaWideAngle() const { return "\uf3e0"; }
    QString mdiPaperCutVertical() const { return "\uf3e1"; }
    QString mdiPaperclip() const { return "\uf3e2"; }
    QString mdiParking() const { return "\uf3e3"; }
    QString mdiPause() const { return "\uf3e4"; }
    QString mdiPauseCircle() const { return "\uf3e5"; }
    QString mdiPauseCircleOutline() const { return "\uf3e6"; }
    QString mdiPauseOctagon() const { return "\uf3e7"; }
    QString mdiPauseOctagonOutline() const { return "\uf3e8"; }
    QString mdiPaw() const { return "\uf3e9"; }
    QString mdiPawOff() const { return "\uf657"; }
    QString mdiPen() const { return "\uf3ea"; }
    QString mdiPencil() const { return "\uf3eb"; }
    QString mdiPencilBox() const { return "\uf3ec"; }
    QString mdiPencilBoxOutline() const { return "\uf3ed"; }
    QString mdiPencilLock() const { return "\uf3ee"; }
    QString mdiPencilOff() const { return "\uf3ef"; }
    QString mdiPercent() const { return "\uf3f0"; }
    QString mdiPharmacy() const { return "\uf3f1"; }
    QString mdiPhone() const { return "\uf3f2"; }
    QString mdiPhoneBluetooth() const { return "\uf3f3"; }
    QString mdiPhoneClassic() const { return "\uf602"; }
    QString mdiPhoneForward() const { return "\uf3f4"; }
    QString mdiPhoneHangup() const { return "\uf3f5"; }
    QString mdiPhoneInTalk() const { return "\uf3f6"; }
    QString mdiPhoneIncoming() const { return "\uf3f7"; }
    QString mdiPhoneLocked() const { return "\uf3f8"; }
    QString mdiPhoneLog() const { return "\uf3f9"; }
    QString mdiPhoneMinus() const { return "\uf658"; }
    QString mdiPhoneMissed() const { return "\uf3fa"; }
    QString mdiPhoneOutgoing() const { return "\uf3fb"; }
    QString mdiPhonePaused() const { return "\uf3fc"; }
    QString mdiPhonePlus() const { return "\uf659"; }
    QString mdiPhoneSettings() const { return "\uf3fd"; }
    QString mdiPhoneVoip() const { return "\uf3fe"; }
    QString mdiPi() const { return "\uf3ff"; }
    QString mdiPiBox() const { return "\uf400"; }
    QString mdiPiano() const { return "\uf67c"; }
    QString mdiPig() const { return "\uf401"; }
    QString mdiPill() const { return "\uf402"; }
    QString mdiPin() const { return "\uf403"; }
    QString mdiPinOff() const { return "\uf404"; }
    QString mdiPineTree() const { return "\uf405"; }
    QString mdiPineTreeBox() const { return "\uf406"; }
    QString mdiPinterest() const { return "\uf407"; }
    QString mdiPinterestBox() const { return "\uf408"; }
    QString mdiPizza() const { return "\uf409"; }
    QString mdiPlaneShield() const { return "\uf6ba"; }
    QString mdiPlay() const { return "\uf40a"; }
    QString mdiPlayBoxOutline() const { return "\uf40b"; }
    QString mdiPlayCircle() const { return "\uf40c"; }
    QString mdiPlayCircleOutline() const { return "\uf40d"; }
    QString mdiPlayPause() const { return "\uf40e"; }
    QString mdiPlayProtectedContent() const { return "\uf40f"; }
    QString mdiPlaylistCheck() const { return "\uf5c7"; }
    QString mdiPlaylistMinus() const { return "\uf410"; }
    QString mdiPlaylistPlay() const { return "\uf411"; }
    QString mdiPlaylistPlus() const { return "\uf412"; }
    QString mdiPlaylistRemove() const { return "\uf413"; }
    QString mdiPlaystation() const { return "\uf414"; }
    QString mdiPlex() const { return "\uf6b9"; }
    QString mdiPlus() const { return "\uf415"; }
    QString mdiPlusBox() const { return "\uf416"; }
    QString mdiPlusCircle() const { return "\uf417"; }
    QString mdiPlusCircleMultipleOutline() const { return "\uf418"; }
    QString mdiPlusCircleOutline() const { return "\uf419"; }
    QString mdiPlusNetwork() const { return "\uf41a"; }
    QString mdiPlusOne() const { return "\uf41b"; }
    QString mdiPocket() const { return "\uf41c"; }
    QString mdiPokeball() const { return "\uf41d"; }
    QString mdiPolaroid() const { return "\uf41e"; }
    QString mdiPoll() const { return "\uf41f"; }
    QString mdiPollBox() const { return "\uf420"; }
    QString mdiPolymer() const { return "\uf421"; }
    QString mdiPool() const { return "\uf606"; }
    QString mdiPopcorn() const { return "\uf422"; }
    QString mdiPot() const { return "\uf65a"; }
    QString mdiPotMix() const { return "\uf65b"; }
    QString mdiPound() const { return "\uf423"; }
    QString mdiPoundBox() const { return "\uf424"; }
    QString mdiPower() const { return "\uf425"; }
    QString mdiPowerPlug() const { return "\uf6a4"; }
    QString mdiPowerPlugOff() const { return "\uf6a5"; }
    QString mdiPowerSettings() const { return "\uf426"; }
    QString mdiPowerSocket() const { return "\uf427"; }
    QString mdiPresentation() const { return "\uf428"; }
    QString mdiPresentationPlay() const { return "\uf429"; }
    QString mdiPrinter() const { return "\uf42a"; }
    QString mdiPrinter3d() const { return "\uf42b"; }
    QString mdiPrinterAlert() const { return "\uf42c"; }
    QString mdiPriorityHigh() const { return "\uf603"; }
    QString mdiPriorityLow() const { return "\uf604"; }
    QString mdiProfessionalHexagon() const { return "\uf42d"; }
    QString mdiProjector() const { return "\uf42e"; }
    QString mdiProjectorScreen() const { return "\uf42f"; }
    QString mdiPublish() const { return "\uf6a6"; }
    QString mdiPulse() const { return "\uf430"; }
    QString mdiPuzzle() const { return "\uf431"; }
    QString mdiQqchat() const { return "\uf605"; }
    QString mdiQrcode() const { return "\uf432"; }
    QString mdiQrcodeScan() const { return "\uf433"; }
    QString mdiQuadcopter() const { return "\uf434"; }
    QString mdiQualityHigh() const { return "\uf435"; }
    QString mdiQuicktime() const { return "\uf436"; }
    QString mdiRadar() const { return "\uf437"; }
    QString mdiRadiator() const { return "\uf438"; }
    QString mdiRadio() const { return "\uf439"; }
    QString mdiRadioHandheld() const { return "\uf43a"; }
    QString mdiRadioTower() const { return "\uf43b"; }
    QString mdiRadioactive() const { return "\uf43c"; }
    QString mdiRadioboxBlank() const { return "\uf43d"; }
    QString mdiRadioboxMarked() const { return "\uf43e"; }
    QString mdiRaspberrypi() const { return "\uf43f"; }
    QString mdiRayEnd() const { return "\uf440"; }
    QString mdiRayEndArrow() const { return "\uf441"; }
    QString mdiRayStart() const { return "\uf442"; }
    QString mdiRayStartArrow() const { return "\uf443"; }
    QString mdiRayStartEnd() const { return "\uf444"; }
    QString mdiRayVertex() const { return "\uf445"; }
    QString mdiRdio() const { return "\uf446"; }
    QString mdiRead() const { return "\uf447"; }
    QString mdiReadability() const { return "\uf448"; }
    QString mdiReceipt() const { return "\uf449"; }
    QString mdiRecord() const { return "\uf44a"; }
    QString mdiRecordRec() const { return "\uf44b"; }
    QString mdiRecycle() const { return "\uf44c"; }
    QString mdiReddit() const { return "\uf44d"; }
    QString mdiRedo() const { return "\uf44e"; }
    QString mdiRedoVariant() const { return "\uf44f"; }
    QString mdiRefresh() const { return "\uf450"; }
    QString mdiRegex() const { return "\uf451"; }
    QString mdiRelativeScale() const { return "\uf452"; }
    QString mdiReload() const { return "\uf453"; }
    QString mdiRemote() const { return "\uf454"; }
    QString mdiRenameBox() const { return "\uf455"; }
    QString mdiReorderHorizontal() const { return "\uf687"; }
    QString mdiReorderVertical() const { return "\uf688"; }
    QString mdiRepeat() const { return "\uf456"; }
    QString mdiRepeatOff() const { return "\uf457"; }
    QString mdiRepeatOnce() const { return "\uf458"; }
    QString mdiReplay() const { return "\uf459"; }
    QString mdiReply() const { return "\uf45a"; }
    QString mdiReplyAll() const { return "\uf45b"; }
    QString mdiReproduction() const { return "\uf45c"; }
    QString mdiResizeBottomRight() const { return "\uf45d"; }
    QString mdiResponsive() const { return "\uf45e"; }
    QString mdiRestore() const { return "\uf6a7"; }
    QString mdiRewind() const { return "\uf45f"; }
    QString mdiRibbon() const { return "\uf460"; }
    QString mdiRoad() const { return "\uf461"; }
    QString mdiRoadVariant() const { return "\uf462"; }
    QString mdiRobot() const { return "\uf6a8"; }
    QString mdiRocket() const { return "\uf463"; }
    QString mdiRotate3d() const { return "\uf464"; }
    QString mdiRotate90() const { return "\uf6a9"; }
    QString mdiRotateLeft() const { return "\uf465"; }
    QString mdiRotateLeftVariant() const { return "\uf466"; }
    QString mdiRotateRight() const { return "\uf467"; }
    QString mdiRotateRightVariant() const { return "\uf468"; }
    QString mdiRoundedCorner() const { return "\uf607"; }
    QString mdiRouterWireless() const { return "\uf469"; }
    QString mdiRoutes() const { return "\uf46a"; }
    QString mdiRowing() const { return "\uf608"; }
    QString mdiRss() const { return "\uf46b"; }
    QString mdiRssBox() const { return "\uf46c"; }
    QString mdiRuler() const { return "\uf46d"; }
    QString mdiRun() const { return "\uf46e"; }
    QString mdiSale() const { return "\uf46f"; }
    QString mdiSatellite() const { return "\uf470"; }
    QString mdiSatelliteVariant() const { return "\uf471"; }
    QString mdiSaxophone() const { return "\uf609"; }
    QString mdiScale() const { return "\uf472"; }
    QString mdiScaleBalance() const { return "\uf5d1"; }
    QString mdiScaleBathroom() const { return "\uf473"; }
    QString mdiScanner() const { return "\uf6aa"; }
    QString mdiSchool() const { return "\uf474"; }
    QString mdiScreenRotation() const { return "\uf475"; }
    QString mdiScreenRotationLock() const { return "\uf476"; }
    QString mdiScrewdriver() const { return "\uf477"; }
    QString mdiScript() const { return "\uf478"; }
    QString mdiSd() const { return "\uf479"; }
    QString mdiSeal() const { return "\uf47a"; }
    QString mdiSeatFlat() const { return "\uf47b"; }
    QString mdiSeatFlatAngled() const { return "\uf47c"; }
    QString mdiSeatIndividualSuite() const { return "\uf47d"; }
    QString mdiSeatLegroomExtra() const { return "\uf47e"; }
    QString mdiSeatLegroomNormal() const { return "\uf47f"; }
    QString mdiSeatLegroomReduced() const { return "\uf480"; }
    QString mdiSeatReclineExtra() const { return "\uf481"; }
    QString mdiSeatReclineNormal() const { return "\uf482"; }
    QString mdiSecurity() const { return "\uf483"; }
    QString mdiSecurityHome() const { return "\uf689"; }
    QString mdiSecurityNetwork() const { return "\uf484"; }
    QString mdiSelect() const { return "\uf485"; }
    QString mdiSelectAll() const { return "\uf486"; }
    QString mdiSelectInverse() const { return "\uf487"; }
    QString mdiSelectOff() const { return "\uf488"; }
    QString mdiSelection() const { return "\uf489"; }
    QString mdiSend() const { return "\uf48a"; }
    QString mdiSerialPort() const { return "\uf65c"; }
    QString mdiServer() const { return "\uf48b"; }
    QString mdiServerMinus() const { return "\uf48c"; }
    QString mdiServerNetwork() const { return "\uf48d"; }
    QString mdiServerNetworkOff() const { return "\uf48e"; }
    QString mdiServerOff() const { return "\uf48f"; }
    QString mdiServerPlus() const { return "\uf490"; }
    QString mdiServerRemove() const { return "\uf491"; }
    QString mdiServerSecurity() const { return "\uf492"; }
    QString mdiSettings() const { return "\uf493"; }
    QString mdiSettingsBox() const { return "\uf494"; }
    QString mdiShapeCirclePlus() const { return "\uf65d"; }
    QString mdiShapePlus() const { return "\uf495"; }
    QString mdiShapePolygonPlus() const { return "\uf65e"; }
    QString mdiShapeRectanglePlus() const { return "\uf65f"; }
    QString mdiShapeSquarePlus() const { return "\uf660"; }
    QString mdiShare() const { return "\uf496"; }
    QString mdiShareVariant() const { return "\uf497"; }
    QString mdiShield() const { return "\uf498"; }
    QString mdiShieldOutline() const { return "\uf499"; }
    QString mdiShopping() const { return "\uf49a"; }
    QString mdiShoppingMusic() const { return "\uf49b"; }
    QString mdiShredder() const { return "\uf49c"; }
    QString mdiShuffle() const { return "\uf49d"; }
    QString mdiShuffleDisabled() const { return "\uf49e"; }
    QString mdiShuffleVariant() const { return "\uf49f"; }
    QString mdiSigma() const { return "\uf4a0"; }
    QString mdiSigmaLower() const { return "\uf62b"; }
    QString mdiSignCaution() const { return "\uf4a1"; }
    QString mdiSignal() const { return "\uf4a2"; }
    QString mdiSignalVariant() const { return "\uf60a"; }
    QString mdiSilverware() const { return "\uf4a3"; }
    QString mdiSilverwareFork() const { return "\uf4a4"; }
    QString mdiSilverwareSpoon() const { return "\uf4a5"; }
    QString mdiSilverwareVariant() const { return "\uf4a6"; }
    QString mdiSim() const { return "\uf4a7"; }
    QString mdiSimAlert() const { return "\uf4a8"; }
    QString mdiSimOff() const { return "\uf4a9"; }
    QString mdiSitemap() const { return "\uf4aa"; }
    QString mdiSkipBackward() const { return "\uf4ab"; }
    QString mdiSkipForward() const { return "\uf4ac"; }
    QString mdiSkipNext() const { return "\uf4ad"; }
    QString mdiSkipNextCircle() const { return "\uf661"; }
    QString mdiSkipNextCircleOutline() const { return "\uf662"; }
    QString mdiSkipPrevious() const { return "\uf4ae"; }
    QString mdiSkipPreviousCircle() const { return "\uf663"; }
    QString mdiSkipPreviousCircleOutline() const { return "\uf664"; }
    QString mdiSkull() const { return "\uf68b"; }
    QString mdiSkype() const { return "\uf4af"; }
    QString mdiSkypeBusiness() const { return "\uf4b0"; }
    QString mdiSlack() const { return "\uf4b1"; }
    QString mdiSleep() const { return "\uf4b2"; }
    QString mdiSleepOff() const { return "\uf4b3"; }
    QString mdiSmoking() const { return "\uf4b4"; }
    QString mdiSmokingOff() const { return "\uf4b5"; }
    QString mdiSnapchat() const { return "\uf4b6"; }
    QString mdiSnowman() const { return "\uf4b7"; }
    QString mdiSoccer() const { return "\uf4b8"; }
    QString mdiSofa() const { return "\uf4b9"; }
    QString mdiSolid() const { return "\uf68c"; }
    QString mdiSort() const { return "\uf4ba"; }
    QString mdiSortAlphabetical() const { return "\uf4bb"; }
    QString mdiSortAscending() const { return "\uf4bc"; }
    QString mdiSortDescending() const { return "\uf4bd"; }
    QString mdiSortNumeric() const { return "\uf4be"; }
    QString mdiSortVariant() const { return "\uf4bf"; }
    QString mdiSoundcloud() const { return "\uf4c0"; }
    QString mdiSourceBranch() const { return "\uf62c"; }
    QString mdiSourceFork() const { return "\uf4c1"; }
    QString mdiSourceMerge() const { return "\uf62d"; }
    QString mdiSourcePull() const { return "\uf4c2"; }
    QString mdiSpeaker() const { return "\uf4c3"; }
    QString mdiSpeakerOff() const { return "\uf4c4"; }
    QString mdiSpeedometer() const { return "\uf4c5"; }
    QString mdiSpellcheck() const { return "\uf4c6"; }
    QString mdiSpotify() const { return "\uf4c7"; }
    QString mdiSpotlight() const { return "\uf4c8"; }
    QString mdiSpotlightBeam() const { return "\uf4c9"; }
    QString mdiSpray() const { return "\uf665"; }
    QString mdiSquareInc() const { return "\uf4ca"; }
    QString mdiSquareIncCash() const { return "\uf4cb"; }
    QString mdiStackexchange() const { return "\uf60b"; }
    QString mdiStackoverflow() const { return "\uf4cc"; }
    QString mdiStairs() const { return "\uf4cd"; }
    QString mdiStar() const { return "\uf4ce"; }
    QString mdiStarCircle() const { return "\uf4cf"; }
    QString mdiStarHalf() const { return "\uf4d0"; }
    QString mdiStarOff() const { return "\uf4d1"; }
    QString mdiStarOutline() const { return "\uf4d2"; }
    QString mdiSteam() const { return "\uf4d3"; }
    QString mdiSteering() const { return "\uf4d4"; }
    QString mdiStepBackward() const { return "\uf4d5"; }
    QString mdiStepBackward2() const { return "\uf4d6"; }
    QString mdiStepForward() const { return "\uf4d7"; }
    QString mdiStepForward2() const { return "\uf4d8"; }
    QString mdiStethoscope() const { return "\uf4d9"; }
    QString mdiSticker() const { return "\uf5d0"; }
    QString mdiStocking() const { return "\uf4da"; }
    QString mdiStop() const { return "\uf4db"; }
    QString mdiStopCircle() const { return "\uf666"; }
    QString mdiStopCircleOutline() const { return "\uf667"; }
    QString mdiStore() const { return "\uf4dc"; }
    QString mdiStore24Hour() const { return "\uf4dd"; }
    QString mdiStove() const { return "\uf4de"; }
    QString mdiSubdirectoryArrowLeft() const { return "\uf60c"; }
    QString mdiSubdirectoryArrowRight() const { return "\uf60d"; }
    QString mdiSubway() const { return "\uf6ab"; }
    QString mdiSubwayVariant() const { return "\uf4df"; }
    QString mdiSunglasses() const { return "\uf4e0"; }
    QString mdiSurroundSound() const { return "\uf5c5"; }
    QString mdiSwapHorizontal() const { return "\uf4e1"; }
    QString mdiSwapVertical() const { return "\uf4e2"; }
    QString mdiSwim() const { return "\uf4e3"; }
    QString mdiSwitch() const { return "\uf4e4"; }
    QString mdiSword() const { return "\uf4e5"; }
    QString mdiSync() const { return "\uf4e6"; }
    QString mdiSyncAlert() const { return "\uf4e7"; }
    QString mdiSyncOff() const { return "\uf4e8"; }
    QString mdiTab() const { return "\uf4e9"; }
    QString mdiTabUnselected() const { return "\uf4ea"; }
    QString mdiTable() const { return "\uf4eb"; }
    QString mdiTableColumnPlusAfter() const { return "\uf4ec"; }
    QString mdiTableColumnPlusBefore() const { return "\uf4ed"; }
    QString mdiTableColumnRemove() const { return "\uf4ee"; }
    QString mdiTableColumnWidth() const { return "\uf4ef"; }
    QString mdiTableEdit() const { return "\uf4f0"; }
    QString mdiTableLarge() const { return "\uf4f1"; }
    QString mdiTableRowHeight() const { return "\uf4f2"; }
    QString mdiTableRowPlusAfter() const { return "\uf4f3"; }
    QString mdiTableRowPlusBefore() const { return "\uf4f4"; }
    QString mdiTableRowRemove() const { return "\uf4f5"; }
    QString mdiTablet() const { return "\uf4f6"; }
    QString mdiTabletAndroid() const { return "\uf4f7"; }
    QString mdiTabletIpad() const { return "\uf4f8"; }
    QString mdiTag() const { return "\uf4f9"; }
    QString mdiTagFaces() const { return "\uf4fa"; }
    QString mdiTagHeart() const { return "\uf68a"; }
    QString mdiTagMultiple() const { return "\uf4fb"; }
    QString mdiTagOutline() const { return "\uf4fc"; }
    QString mdiTagTextOutline() const { return "\uf4fd"; }
    QString mdiTarget() const { return "\uf4fe"; }
    QString mdiTaxi() const { return "\uf4ff"; }
    QString mdiTeamviewer() const { return "\uf500"; }
    QString mdiTelegram() const { return "\uf501"; }
    QString mdiTelevision() const { return "\uf502"; }
    QString mdiTelevisionGuide() const { return "\uf503"; }
    QString mdiTemperatureCelsius() const { return "\uf504"; }
    QString mdiTemperatureFahrenheit() const { return "\uf505"; }
    QString mdiTemperatureKelvin() const { return "\uf506"; }
    QString mdiTennis() const { return "\uf507"; }
    QString mdiTent() const { return "\uf508"; }
    QString mdiTerrain() const { return "\uf509"; }
    QString mdiTestTube() const { return "\uf668"; }
    QString mdiTextShadow() const { return "\uf669"; }
    QString mdiTextToSpeech() const { return "\uf50a"; }
    QString mdiTextToSpeechOff() const { return "\uf50b"; }
    QString mdiTextbox() const { return "\uf60e"; }
    QString mdiTexture() const { return "\uf50c"; }
    QString mdiTheater() const { return "\uf50d"; }
    QString mdiThemeLightDark() const { return "\uf50e"; }
    QString mdiThermometer() const { return "\uf50f"; }
    QString mdiThermometerLines() const { return "\uf510"; }
    QString mdiThumbDown() const { return "\uf511"; }
    QString mdiThumbDownOutline() const { return "\uf512"; }
    QString mdiThumbUp() const { return "\uf513"; }
    QString mdiThumbUpOutline() const { return "\uf514"; }
    QString mdiThumbsUpDown() const { return "\uf515"; }
    QString mdiTicket() const { return "\uf516"; }
    QString mdiTicketAccount() const { return "\uf517"; }
    QString mdiTicketConfirmation() const { return "\uf518"; }
    QString mdiTie() const { return "\uf519"; }
    QString mdiTimelapse() const { return "\uf51a"; }
    QString mdiTimer() const { return "\uf51b"; }
    QString mdiTimer10() const { return "\uf51c"; }
    QString mdiTimer3() const { return "\uf51d"; }
    QString mdiTimerOff() const { return "\uf51e"; }
    QString mdiTimerSand() const { return "\uf51f"; }
    QString mdiTimerSandEmpty() const { return "\uf6ac"; }
    QString mdiTimetable() const { return "\uf520"; }
    QString mdiToggleSwitch() const { return "\uf521"; }
    QString mdiToggleSwitchOff() const { return "\uf522"; }
    QString mdiTooltip() const { return "\uf523"; }
    QString mdiTooltipEdit() const { return "\uf524"; }
    QString mdiTooltipImage() const { return "\uf525"; }
    QString mdiTooltipOutline() const { return "\uf526"; }
    QString mdiTooltipOutlinePlus() const { return "\uf527"; }
    QString mdiTooltipText() const { return "\uf528"; }
    QString mdiTooth() const { return "\uf529"; }
    QString mdiTor() const { return "\uf52a"; }
    QString mdiTowerBeach() const { return "\uf680"; }
    QString mdiTowerFire() const { return "\uf681"; }
    QString mdiTrafficLight() const { return "\uf52b"; }
    QString mdiTrain() const { return "\uf52c"; }
    QString mdiTram() const { return "\uf52d"; }
    QString mdiTranscribe() const { return "\uf52e"; }
    QString mdiTranscribeClose() const { return "\uf52f"; }
    QString mdiTransfer() const { return "\uf530"; }
    QString mdiTransitTransfer() const { return "\uf6ad"; }
    QString mdiTranslate() const { return "\uf5ca"; }
    QString mdiTree() const { return "\uf531"; }
    QString mdiTrello() const { return "\uf532"; }
    QString mdiTrendingDown() const { return "\uf533"; }
    QString mdiTrendingNeutral() const { return "\uf534"; }
    QString mdiTrendingUp() const { return "\uf535"; }
    QString mdiTriangle() const { return "\uf536"; }
    QString mdiTriangleOutline() const { return "\uf537"; }
    QString mdiTrophy() const { return "\uf538"; }
    QString mdiTrophyAward() const { return "\uf539"; }
    QString mdiTrophyOutline() const { return "\uf53a"; }
    QString mdiTrophyVariant() const { return "\uf53b"; }
    QString mdiTrophyVariantOutline() const { return "\uf53c"; }
    QString mdiTruck() const { return "\uf53d"; }
    QString mdiTruckDelivery() const { return "\uf53e"; }
    QString mdiTshirtCrew() const { return "\uf53f"; }
    QString mdiTshirtV() const { return "\uf540"; }
    QString mdiTumblr() const { return "\uf541"; }
    QString mdiTumblrReblog() const { return "\uf542"; }
    QString mdiTune() const { return "\uf62e"; }
    QString mdiTuneVertical() const { return "\uf66a"; }
    QString mdiTwitch() const { return "\uf543"; }
    QString mdiTwitter() const { return "\uf544"; }
    QString mdiTwitterBox() const { return "\uf545"; }
    QString mdiTwitterCircle() const { return "\uf546"; }
    QString mdiTwitterRetweet() const { return "\uf547"; }
    QString mdiUbuntu() const { return "\uf548"; }
    QString mdiUmbraco() const { return "\uf549"; }
    QString mdiUmbrella() const { return "\uf54a"; }
    QString mdiUmbrellaOutline() const { return "\uf54b"; }
    QString mdiUndo() const { return "\uf54c"; }
    QString mdiUndoVariant() const { return "\uf54d"; }
    QString mdiUnfoldLess() const { return "\uf54e"; }
    QString mdiUnfoldMore() const { return "\uf54f"; }
    QString mdiUngroup() const { return "\uf550"; }
    QString mdiUnity() const { return "\uf6ae"; }
    QString mdiUntappd() const { return "\uf551"; }
    QString mdiUpdate() const { return "\uf6af"; }
    QString mdiUpload() const { return "\uf552"; }
    QString mdiUsb() const { return "\uf553"; }
    QString mdiVectorArrangeAbove() const { return "\uf554"; }
    QString mdiVectorArrangeBelow() const { return "\uf555"; }
    QString mdiVectorCircle() const { return "\uf556"; }
    QString mdiVectorCircleVariant() const { return "\uf557"; }
    QString mdiVectorCombine() const { return "\uf558"; }
    QString mdiVectorCurve() const { return "\uf559"; }
    QString mdiVectorDifference() const { return "\uf55a"; }
    QString mdiVectorDifferenceAb() const { return "\uf55b"; }
    QString mdiVectorDifferenceBa() const { return "\uf55c"; }
    QString mdiVectorIntersection() const { return "\uf55d"; }
    QString mdiVectorLine() const { return "\uf55e"; }
    QString mdiVectorPoint() const { return "\uf55f"; }
    QString mdiVectorPolygon() const { return "\uf560"; }
    QString mdiVectorPolyline() const { return "\uf561"; }
    QString mdiVectorRectangle() const { return "\uf5c6"; }
    QString mdiVectorSelection() const { return "\uf562"; }
    QString mdiVectorSquare() const { return "\uf001"; }
    QString mdiVectorTriangle() const { return "\uf563"; }
    QString mdiVectorUnion() const { return "\uf564"; }
    QString mdiVerified() const { return "\uf565"; }
    QString mdiVibrate() const { return "\uf566"; }
    QString mdiVideo() const { return "\uf567"; }
    QString mdiVideoOff() const { return "\uf568"; }
    QString mdiVideoSwitch() const { return "\uf569"; }
    QString mdiViewAgenda() const { return "\uf56a"; }
    QString mdiViewArray() const { return "\uf56b"; }
    QString mdiViewCarousel() const { return "\uf56c"; }
    QString mdiViewColumn() const { return "\uf56d"; }
    QString mdiViewDashboard() const { return "\uf56e"; }
    QString mdiViewDay() const { return "\uf56f"; }
    QString mdiViewGrid() const { return "\uf570"; }
    QString mdiViewHeadline() const { return "\uf571"; }
    QString mdiViewList() const { return "\uf572"; }
    QString mdiViewModule() const { return "\uf573"; }
    QString mdiViewQuilt() const { return "\uf574"; }
    QString mdiViewStream() const { return "\uf575"; }
    QString mdiViewWeek() const { return "\uf576"; }
    QString mdiVimeo() const { return "\uf577"; }
    QString mdiVine() const { return "\uf578"; }
    QString mdiViolin() const { return "\uf60f"; }
    QString mdiVisualstudio() const { return "\uf610"; }
    QString mdiVk() const { return "\uf579"; }
    QString mdiVkBox() const { return "\uf57a"; }
    QString mdiVkCircle() const { return "\uf57b"; }
    QString mdiVlc() const { return "\uf57c"; }
    QString mdiVoice() const { return "\uf5cb"; }
    QString mdiVoicemail() const { return "\uf57d"; }
    QString mdiVolumeHigh() const { return "\uf57e"; }
    QString mdiVolumeLow() const { return "\uf57f"; }
    QString mdiVolumeMedium() const { return "\uf580"; }
    QString mdiVolumeOff() const { return "\uf581"; }
    QString mdiVpn() const { return "\uf582"; }
    QString mdiWalk() const { return "\uf583"; }
    QString mdiWallet() const { return "\uf584"; }
    QString mdiWalletGiftcard() const { return "\uf585"; }
    QString mdiWalletMembership() const { return "\uf586"; }
    QString mdiWalletTravel() const { return "\uf587"; }
    QString mdiWan() const { return "\uf588"; }
    QString mdiWatch() const { return "\uf589"; }
    QString mdiWatchExport() const { return "\uf58a"; }
    QString mdiWatchImport() const { return "\uf58b"; }
    QString mdiWatchVibrate() const { return "\uf6b0"; }
    QString mdiWater() const { return "\uf58c"; }
    QString mdiWaterOff() const { return "\uf58d"; }
    QString mdiWaterPercent() const { return "\uf58e"; }
    QString mdiWaterPump() const { return "\uf58f"; }
    QString mdiWatermark() const { return "\uf612"; }
    QString mdiWeatherCloudy() const { return "\uf590"; }
    QString mdiWeatherFog() const { return "\uf591"; }
    QString mdiWeatherHail() const { return "\uf592"; }
    QString mdiWeatherLightning() const { return "\uf593"; }
    QString mdiWeatherLightningRainy() const { return "\uf67d"; }
    QString mdiWeatherNight() const { return "\uf594"; }
    QString mdiWeatherPartlycloudy() const { return "\uf595"; }
    QString mdiWeatherPouring() const { return "\uf596"; }
    QString mdiWeatherRainy() const { return "\uf597"; }
    QString mdiWeatherSnowy() const { return "\uf598"; }
    QString mdiWeatherSnowyRainy() const { return "\uf67e"; }
    QString mdiWeatherSunny() const { return "\uf599"; }
    QString mdiWeatherSunset() const { return "\uf59a"; }
    QString mdiWeatherSunsetDown() const { return "\uf59b"; }
    QString mdiWeatherSunsetUp() const { return "\uf59c"; }
    QString mdiWeatherWindy() const { return "\uf59d"; }
    QString mdiWeatherWindyVariant() const { return "\uf59e"; }
    QString mdiWeb() const { return "\uf59f"; }
    QString mdiWebcam() const { return "\uf5a0"; }
    QString mdiWebhook() const { return "\uf62f"; }
    QString mdiWechat() const { return "\uf611"; }
    QString mdiWeight() const { return "\uf5a1"; }
    QString mdiWeightKilogram() const { return "\uf5a2"; }
    QString mdiWhatsapp() const { return "\uf5a3"; }
    QString mdiWheelchairAccessibility() const { return "\uf5a4"; }
    QString mdiWhiteBalanceAuto() const { return "\uf5a5"; }
    QString mdiWhiteBalanceIncandescent() const { return "\uf5a6"; }
    QString mdiWhiteBalanceIridescent() const { return "\uf5a7"; }
    QString mdiWhiteBalanceSunny() const { return "\uf5a8"; }
    QString mdiWifi() const { return "\uf5a9"; }
    QString mdiWifiOff() const { return "\uf5aa"; }
    QString mdiWii() const { return "\uf5ab"; }
    QString mdiWikipedia() const { return "\uf5ac"; }
    QString mdiWindowClose() const { return "\uf5ad"; }
    QString mdiWindowClosed() const { return "\uf5ae"; }
    QString mdiWindowMaximize() const { return "\uf5af"; }
    QString mdiWindowMinimize() const { return "\uf5b0"; }
    QString mdiWindowOpen() const { return "\uf5b1"; }
    QString mdiWindowRestore() const { return "\uf5b2"; }
    QString mdiWindows() const { return "\uf5b3"; }
    QString mdiWordpress() const { return "\uf5b4"; }
    QString mdiWorker() const { return "\uf5b5"; }
    QString mdiWrap() const { return "\uf5b6"; }
    QString mdiWrench() const { return "\uf5b7"; }
    QString mdiWunderlist() const { return "\uf5b8"; }
    QString mdiXaml() const { return "\uf673"; }
    QString mdiXbox() const { return "\uf5b9"; }
    QString mdiXboxController() const { return "\uf5ba"; }
    QString mdiXboxControllerOff() const { return "\uf5bb"; }
    QString mdiXda() const { return "\uf5bc"; }
    QString mdiXing() const { return "\uf5bd"; }
    QString mdiXingBox() const { return "\uf5be"; }
    QString mdiXingCircle() const { return "\uf5bf"; }
    QString mdiXml() const { return "\uf5c0"; }
    QString mdiYeast() const { return "\uf5c1"; }
    QString mdiYelp() const { return "\uf5c2"; }
    QString mdiYinYang() const { return "\uf67f"; }
    QString mdiYoutubePlay() const { return "\uf5c3"; }
    QString mdiZipBox() const { return "\uf5c4"; }
    QString mdiBlank() const { return "\uf68c"; }
}

#endif // MATERIAL_ICONS_H
