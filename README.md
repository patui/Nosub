```
Nosub Official Website: https://www.nosub.cn

Nosub Official Blog: https://www.nosub.net
```

###### [中文Readme](https://github.com/patui/Nosub/blob/master/README_zh.md)

###### [繁体中文Readme](https://github.com/patui/Nosub/blob/master/README_zh_tw.md)

![2dc9e31c83ff9cea41b6f11b3a43f0da](https://github.com/user-attachments/assets/06f21407-f678-4e7e-bea3-d02d72d228fd)


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
- [x] Windows
- [x] MacOS (ARM-64)
- [x] Linux 

###### (ii) Core components of Nosub:
- [x] Video Player
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


![image](https://github.com/user-attachments/assets/43b3c170-5b8c-4e1b-8b44-246498dd58e2)
