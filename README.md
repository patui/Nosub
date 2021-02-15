#### Nosub is a new captioning software [Download](https://github.com/patui/Nosub/releases)

>Developer vision: to make captioning truly simple for newbies.
-------

###### [中文Readme](https://github.com/patui/Nosub/blob/master/README_zh.md)

###### [繁体中文Readme](https://github.com/patui/Nosub/blob/master/README_zh_tw.md)

###### (i) Nosub's supporting platforms.
- [x] Windows
- [ ] MacOS (not supported yet, please be patient)
- [ ] Linux (not supported yet, please be patient)

###### (ii) Core components of Nosub.
- [x] Video player
- [x] Infinite scrolling time axis (waveform)
- [x] Infinite scrolling title editor; (cut, merge, delete, modify, adjust time)

(Nosub theoretically supports over 1000 hours of video, temporarily limited to 100 hours ;))

###### (iii) Nosub's core features.
- [x] Audio noise reduction processing; (from WebRTC)
- [x] Offline voice auto-cutting; (from WebRTC)
- [x] Speech recognition to generate subtitles; 
- [x] Subtitle Snapshot; (solves the problem of lost subtitles from traditional subtitle software flashing)
- [x] Video suppression; (asynchronous task queuing, batch suppression support)
- [x] Subtitle translation; (asynchronous task queue, batch translation support)

###### (iv) List of speech recognition engines already supported by Nosub.
```
List of voice file transcription engine support: (i.e. direct audio/video to subtitles)
1. Alibaba Cloud voice file transcription.
2. Transcription of the teleflight voice files.
3. Tencent voice file transcription.
4. Baidu voice file transcription.
```

###### (v) List of subtitle translation engines already supported by Nosub.


###### (vi) Open source libraries used by Nosub: (as of October 1, 2020)
- QT Cross-platform GUI library; (QT is a comprehensive C++ library, not just a GUI)
- CppRestSDK Microsoft C++ 11-style library for HTTP requests.
- FFmpeg audio and video decoding library.
- H.264 H264 codec library.
- H.265 H265 codec library.
- Mp3lame Mp3 codec library;
- Fdk-aac AAC codec library;
- Libass subtitle rendering library;
- Uchardet text encoding detection library.
- Iconv Text encoding conversion library;
- Fontconfig font configuration library;
- Freetype font rendering library;
- OpenSSL SSL communication encryption library;
- WebRTC Chrome live audio and video library.
- SDL2 multimedia rendering library.
- SDL2-ttf subtitle rendering library;
- Spdlog logging repository;
- MediaInfo View audio and video information library.
