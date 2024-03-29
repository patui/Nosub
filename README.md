```
Nosub Official Website: https://www.nosub.cn
```

###### [中文Readme](https://github.com/patui/Nosub/blob/master/README_zh.md)

###### [繁体中文Readme](https://github.com/patui/Nosub/blob/master/README_zh_tw.md)


>Developer's vision: to make subtitling really easy for newbies;
---

Thoughts about the new version:

`
The new version of V2 has begun to subtract, focusing entirely on subtitle editing software that
for the ultimate in subtitle editing and tweaking efficiency;
`


###### Improvements of V2 relative to V1 version:
- Build cross-platform programs based on Cmake, easy to maintain and refactor;
- Developed based on QT6.5 and C++ 20;
- Rewrite the video player (the new version is based on libmpv), support hardware decoding and variable speed playback, greatly improve SEEK speed and compatibility;
- Improve subtitle editor, support subtitle find and replace function;
- Optimize the interaction logic of subtitle editor to improve the efficiency of subtitle editing;
- Dramatically improve subtitle loading speed (parsing speed);
- Cut down most of the non-core businesses, such as speech recognition, video compression, viewing video information, exporting MP3, etc.;
- Simplify UI interaction logic;


###### (i) Nosub's supported platforms:
- [ x ] Windows
- [ ] MacOS (not supported yet, please be patient)
- [ ] Linux (not supported at the moment, please be patient)

###### (ii) Core components of Nosub:
- [ x] Video Player
- [x] Timeline (waveform charts)
- [x] Subtitle editor; (subtitle cutting, merging, deleting, modifying, timing)


###### (c) Nosub V2 version third-party library:
- QT cross-platform GUI library ; (QT is a comprehensive C++ library , not just GUI)
- MPV video player;
- FFmpeg audio and video decoding library ;
- Uchardet text encoding detection library;
- Iconv text encoding conversion library.
- SDL2 multimedia rendering library;
- SDL2-ttf subtitle rendering library.
