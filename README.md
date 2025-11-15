<h3 align="center">
     <a href="[https://github.com/DarkFlippers/unleashed-firmware](https://github.com/SubSpectra/SubSpectra-Firmware)">
        <img src="https://github.com/user-attachments/assets/35172881-7e1a-4516-8d75-696feba47475" />

</h3>

[![💻Discord Server](https://img.shields.io/iscord/937479784148115456?style=flat&logo=discord&label=Discord&color=%237289DA&link=https%3A%2F%2Fdiscord.unleashedflip.com%2F)](https://iscord.unleashedflip.com)
[![💻Website]([https://](https://subspectra.finnsabia.com/))](https://subspectra.finnsabia.com/)
![](https://img.shields.io/badge/Coded%20By%20Human-100%25-brightgreen)

# SubSpectra - Flipper Zero Custom Firmware

SubSpectra is a custom firmware for Flipper Zero focused on fun, customization, and expanded capabilities:

- Funny animations and themes
- More customization options
- Infrared, Sub-GHz, NFC, RF tools
- Games and entertainment
- GPIO, Bluetooth, and USB tools
- Download files directly from your Flipper Zero
- You can clone this repo and make SubSpectra the ultimate firmware for you!
- Includes built in language tool, languagetool-master, by [LanguageTool](https://github.com/languagetool-org)
> [!CAUTION]
> Version 1.3 of SubSpectra is no longer supported with security features. To learn more, click the link below.
> 
> [#7](https://github.com/orgs/SubSpectra/discussions/7)
***
## Table of Contents
- [Building and Project Structure](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#building)
- [Customization and Development](https://github.com/SubSpectra/SubSpectra-Firmware/blob/main/README.md#firmware-customization-and-development)
- [Whats New](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#whats-new)
- [License](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#license)
- [Download](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#download)
- [Requirements](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#requirements)
- [Terms of Use](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#terms-of-use)
- [Instructions](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#-instructions)
- [Links](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#links)
- [Notes](https://github.com/SubSpectra/SubSpectra-Firmware?tab=readme-ov-file#notes)

***
## Building 
- **Developer Documentation** - [developer.flipper.net](https://developer.flipper.net/flipperzero/doxygen)  
- **[How to build](/documentation/HowToBuild.md#how-to-build-by-yourself) | [Project-structure](#project-structure)**
- **CLion IDE** - How to setup workspace for flipper firmware development [by Savely Krasovsky](https://krasovs.ky/2022/11/01/flipper-zero-clion.html)
- **"Hello world!"** - plugin tutorial [English<sub> by DroomOne</sub> ](https://github.com/DroomOne/Flipper-Plugin-Tutorial) | [Russian<sub> by Pavel Yakovlev</sub>](https://yakovlev.me/hello-flipper-zero)
- [How to write your own app](https://flipper.atmanos.com/docs/overview/intro).

### Project structure

- `applications`    - Applications and services used in firmware
- `assets`          - Assets used by applications and services
- `debug`           - Debug tool: GDB-plugins, SVD-file and etc
- `documentation`   - Documentation generation system configs and input files
- `firmware`        - Firmware source code
- `scripts`         - Supplementary scripts and python libraries home
   
***
## Firmware Customization and Development
### Customization
1. Clone this repo:  
   `git clone https://github.com/SYOP200/-.git`
2. Follow Flipper Zero firmware build instructions [here](https://github.com/flipperdevices/flipperzero-firmware#building)
3. Copy or link your custom apps and assets into `/apps/` and `/assets/`
4. Run `./fbt` to build!


- Place new apps in `/apps/`
- Add assets (images, sounds) in `/assets/`
- Document your tools in `/docs/`
***
## What's New
### Newest stable release:
Version 1.2
***
> <details>
> <summary><strong>Firmware Changes </strong></summary>
> <br/>
>
> - Many new protocols added
> - Regional TX restrictions removed
> - Extra Sub-GHz frequencies added
> - Frequency range can be extended in settings file _(warning: It can damage Flipper's hardware)_
> - Many rolling code [protocols](#current-modified-and-new-sub-ghz-protocols-list) now have the ability to save & send captured signals  
> - FAAC SLH (Spa) & BFT Mitto (keeloq secure with seed) manual creation
> - External CC1101 module support 
> </details>

> <details>
> <summary><strong>Repo Changes </strong></summary>
> <br/>
>
> - New contributer @trnsk
> - New SubSpectra image
> - New disscusions
> - Better organization

For more information about releases go to the release tab.
***
## License
MIT LICENSING

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so.

***
## Download
Click here to download the latest version of SubSpectra[SubSpectra.custom.firmware.zip](https://github.com/user-attachments/files/22583560/SubSpectra.custom.firmware.zip)
If you want old versions, go to release and find the version you want to download. Click on the download button featured in all releases.
If you want pre-releases then you can sign up on our discord server.
For more information on downloading go to https://docs.flipper.net/
> [!Caution]
> When joining the Pre Release Program (PRP), pre released versions of SubSpectra may not work properly or there may be bugs. Pre Released versions go through very few moderation, this means that they may not be suported on your >Flipper Zero. To allow SubSpectra to perform at its finest use the latest suported version of SubSpectra.
***

## Requirements
Must have Flipper Zero device. No other products will work with this firmware. If you do not know how to install firmware to your Flipper Zero, go to https://stackoverflow.com/questions/73127708/how-to-flash-flipper-zero-with-custom-firmware
***
## Terms of Use
> [!WARNING]
> This software is intended solely for experimental purposes and is not meant for any illegal activities.
> We do not condone unlawful behavior and strongly encourage you to use it only within the bounds of the law.
>
> This project is developed independently and is not affiliated with Flipper Devices.

***
## 📘 Instructions

### Firmware & main Apps feature

- System: [How to change Flipper name](/documentation/CustomFlipperName.md)
- BadUSB: [How to add new keyboard layouts](https://github.com/dummy-decoy/flipperzero_badusb_kl)
- Infrared: [How to make captures to add them into Universal IR remotes](/documentation/InfraredCaptures.md)  

### Sub-GHz

- [How to use Flipper as rolling code remote (Doorhan, Nice FlorS, BFT Mitto, Somfy Telis, Aprimatic, AN-Motors, etc..)](/documentation/SubGHzRemoteProg.md)  
- [Experimental rolling code counter modes (avoid desync)](/documentation/SubGHzCounterMode.md)  
- External Radio: [How to connect CC1101 module](https://github.com/quen0n/flipperzero-ext-cc1101)  
- Transmission is blocked? [How to extend Sub-GHz frequency range](/documentation/DangerousSettings.md)
- [How to add extra Sub-GHz frequencies](/documentation/SubGHzSettings.md)
- [~~Configure Sub-GHz Remote App~~](/documentation/SubGHzRemotePlugin.md) ⚠️ Not recommended, please use embedded configurator

###  Plugins

- TOTP (Authenticator): [config description](https://github.com/akopachov/flipper-zero_authenticator/blob/master/docs/conf-file_description.md) 
- Barcode Generator: [How to use](/documentation/BarcodeGenerator.md)
- Multi Converter: [How to use](/documentation/MultiConverter.md)
- WAV Player: [sample files & how to convert](https://github.com/UberGuidoZ/Flipper/tree/main/Wav_Player#readme)  
- Sub-GHz playlist: [generator script](https://github.com/darmiel/flipper-scripts/blob/main/playlist/playlist_creator_by_chunk.py)

###  GPIO - Plugins that works with external hardware

- Unitemp - Temperature sensors reader: [How to use & supported sensors](https://github.com/quen0n/unitemp-flipperzero#readme)
- [NMEA] GPS: [How to use](https://github.com/xMasterX/all-the-plugins/blob/dev/base_pack/gps_nmea_uart/README.md)  
- i2c Tools [How to use](https://github.com/xMasterX/all-the-plugins/blob/dev/base_pack/flipper_i2ctools/README.md)  
- [NRF24] plugins: [How to use](/documentation/NRF24.md)  
- [WiFi] Scanner: [How to use](https://github.com/SequoiaSan/FlipperZero-WiFi-Scanner_Module#readme) | [Web Flasher](https://sequoiasan.github.io/FlipperZero-WiFi-Scanner_Module/)
- [ESP8266] Deauther: [How to use](https://github.com/SequoiaSan/FlipperZero-Wifi-ESP8266-Deauther-Module#readme) | [Web Flasher](https://sequoiasan.github.io/FlipperZero-Wifi-ESP8266-Deauther-Module/)
- [ESP32] WiFi Marauder: [How to use](https://github.com/UberGuidoZ/Flipper/tree/main/Wifi_DevBoard)<sub> docs by UberGuidoZ</sub> | [Marauder repo](https://github.com/justcallmekoko/ESP32Marauder)
- [ESP32-CAM] Camera Suite: [How to use](https://github.com/CodyTolene/Flipper-Zero-Camera-Suite)
- How to Upload `.bin` to ESP32/ESP8266: [Windows](https://github.com/SequoiaSan/Guide-How-To-Upload-bin-to-ESP8266-ESP32) | [FAP "ESP flasher"](https://github.com/0xchocolate/flipperzero-esp-flasher)
- [GPIO] SentrySafe plugin: [How to use](/documentation/SentrySafe.md)

***

### Links
These are notable links for SubSpetra firmware:
- [Flipper Docs](https://docs.flipper.net/)
- [SubSpectra Website](https://subspectra.finnsabia.com/)
- [Flipper Website](https://flipperzero.one/)
- [Flipper Community](https://flipperzero.one/community)
> [!Important]
> This links are safe and secure.
***
### Notes

Thank you for supporting and downloading SubSpectra custom firmware. If you have questions, sugestions, or bug reports go to the discussions page to talk to us.
***
### Made by @Sysop200
Copyright (c) 2025 SubSpectra Project Authors
