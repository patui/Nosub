```
Nosub Official Website: https://www.nosub.cn

Nosub Official Blog: https://www.nosub.net
```

![image](https://github.com/user-attachments/assets/43b3c170-5b8c-4e1b-8b44-246498dd58e2)

###### [中文Readme](https://github.com/patui/Nosub/blob/master/README_zh.md)

###### [繁体中文Readme](https://github.com/patui/Nosub/blob/master/README_zh_tw.md)

![MainUI](https://github.com/user-attachments/assets/957cf6a0-158d-4e20-93b9-66c261a686a2)

![LLM](https://github.com/user-attachments/assets/421d317b-658d-4156-8646-4134b6b9ae28)
![B01](https://github.com/user-attachments/assets/14701608-985d-4da7-ac87-59306db422b8)


![MainUI-BLACK](https://github.com/user-attachments/assets/ab6f11e7-6a78-4e29-980d-bb798d20427a)

![B02](https://github.com/user-attachments/assets/a14284b5-880a-4cc8-8fff-1b57f12dd55a)

![B03](https://github.com/user-attachments/assets/b21036f6-7b37-4a03-8451-cf8494280f8c)

![A02-N](https://github.com/user-attachments/assets/871fda9a-ad32-4b87-8602-d99953178d5b)



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
- [Qt (跨平台 C++ 框架)](https://www.qt.io/) | [Qt GitHub (部分开源模块)](https://github.com/qt)
- [libmpv (视频播放器核心)](https://github.com/mpv-player/mpv)
- [FFmpeg (音视频解码库)](https://ffmpeg.org/) | [FFmpeg GitHub](https://github.com/FFmpeg/FFmpeg)
- [uchardet (文本编码检测)](https://github.com/BYVoid/uchardet)
- [iconv (文本编码转换)](https://www.gnu.org/software/libiconv/)
- [SDL2 (多媒体渲染库)](https://www.libsdl.org/) | [SDL2 GitHub](https://github.com/libsdl-org/SDL)
- [SDL2_ttf GitHub](https://github.com/libsdl-org/SDL_ttf)
- [OpenGL (渲染库)](https://www.opengl.org/) 
- [sherpa-onnx (ASR 语音识别)](https://github.com/k2-fsa/sherpa-onnx)
- [spdlog (日志库)](https://github.com/gabime/spdlog)
- [demucs.cpp (Demucs v4 C++ 实现)](https://github.com/sevagh/demucs.cpp)
