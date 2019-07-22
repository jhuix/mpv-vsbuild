/*
 * MSVC mmguid.h compatibility header.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _MSVC_MMDEVICEAPI_H
#define _MSVC_MMDEVICEAPI_H

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#endif

//IID_IMMNotificationClient
DEFINE_GUID(IID_IMMNotificationClient,
  0x7991EEC9, 0x7E89, 0x4D85, 0x83, 0x90,
  0x6C, 0x70, 0x3C, 0xEC, 0x60, 0xC);

//IID_IMMDeviceEnumerator
DEFINE_GUID(IID_IMMDeviceEnumerator,
  0xA95664D2, 0x9614, 0x4F35, 0xA7, 0x46,
  0xDE, 0x8D, 0xB6, 0x36, 0x17, 0xE6);

//CLSID_MMDeviceEnumerator
DEFINE_GUID(CLSID_MMDeviceEnumerator,
  0xBCDE0395, 0xE52F, 0x467C, 0x8E, 0x3D,
  0xC4, 0x57, 0x92, 0x91, 0x69, 0x2E);

//IID_IAudioClient
DEFINE_GUID(IID_IAudioClient,
  0x1CB9AD4C, 0xDBFA, 0x4C32, 0xB1, 0x78,
  0xC2, 0xF5, 0x68, 0xA7, 0x03, 0xB2);

//IID_IAudioRenderClient
DEFINE_GUID(IID_IAudioRenderClient,
  0xF294ACFC, 0x3146, 0x4483, 0xA7, 0xBF,
  0xAD, 0xDC, 0xA7, 0xC2, 0x60, 0xE2);

//IID_IAudioClock
DEFINE_GUID(IID_IAudioClock,
  0xCD63314F, 0x3FBA, 0x4A1B, 0x81, 0x2C,
  0xEF, 0x96, 0x35, 0x87, 0x28, 0xE7);

//IID_ISimpleAudioVolume
DEFINE_GUID(IID_ISimpleAudioVolume,
  0x87CE5498, 0x68D6, 0x44E5, 0x92, 0x15,
  0x6D, 0xA4, 0x7E, 0xF8, 0x83, 0xD8);

//IID_IAudioSessionControl
DEFINE_GUID(IID_IAudioSessionControl,
  0xF4B1A599, 0x7266, 0x4319, 0xA8, 0xCA,
  0xE7, 0x0A, 0xCB, 0x11, 0xE8, 0xCD);

//IID_IAudioEndpointVolume
DEFINE_GUID(IID_IAudioEndpointVolume,
  0x5CDF2C82, 0x841E, 0x4546, 0x97, 0x22,
  0x0C, 0xF7, 0x40, 0x78, 0x22, 0x9A);

#endif /* _MSVC_MMDEVICEAPI_H */
