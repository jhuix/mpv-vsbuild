#!/bin/sh

export PKG_CONFIG_PATH=$PWD/dist/ffmpeg/lib/pkgconfig:$PKG_CONFIG_PATH
export DESTDIR=../..$PWD/dist/ffmpeg
cd nv-codec-headers
make install-destdir
cd ../deps
make install
cd ../FFmpeg
./configure  --prefix=../dist/ffmpeg --toolchain=msvc --arch=i386 --target-os=win32 --enable-gpl --enable-version3  --enable-ffplay --enable-ffmpeg --enable-ffprobe --disable-schannel --enable-libmfx --enable-ffnvcodec --enable-libdavs2 --disable-nvenc  --disable-everything --enable-protocols --enable-hwaccels --disable-vaapi --disable-vdpau --disable-bzlib  --disable-doc --enable-ffprobe --enable-ffmpeg --disable-network --enable-lzo --enable-fft --enable-rdft --enable-shared --disable-iconv --optflags=-O2 --enable-decoder='vc1,vc1_qsv,vc1_cuvid'  --enable-decoder='theora,vorbis,opus,vp8,vp9,mpegvideo,mpeg1video,mpeg1_cuvid,mpeg2video,mpeg2_qsv,mpeg2_cuvid,mpeg4,mpeg4_cuvid,mpeg4_qsv,vp8_qsv,vp8_cuvid,vp9_qsv,vp9_cuvid'  --enable-decoder='hevc,hevc_cuvid,hevc_qsv' --enable-decoder='pcm_u8,pcm_s16le,pcm_s24le,pcm_f32le'  --enable-decoder='pcm_s16be,pcm_s24be,pcm_mulaw,pcm_alaw' --enable-demuxer='ogg,matroska,wav,vc1,mpegvideo,mpeg,mpjpeg,aac,h264,hevc'  --enable-parser='vp3,vorbis,vp8,vp9' --enable-decoder='aac,h264,mp3,h264_qsv,h264_cuvid,avs,avs2,cavs,libdavs2'  --enable-demuxer='mp3,mov,mp4,m4a,3gp,3g2,mj2,avs2,avs' --enable-parser='aac,h264,mpegaudio,mpegvideo,hevc,vc1,mpeg4video,vorbis,opus,avs2,cavsvideo,mjpeg'  --enable-filter='aresample,scale,scale_qsv' --extra-cflags='-wd4828 -MT -DDAVS2_LIB'
make install
cd ..
