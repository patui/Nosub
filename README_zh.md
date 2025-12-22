```
官网: https://www.nosub.cn

个人BLOG: https://www.nosub.net

Nosub QQ群：870178887（仅限字幕相关）

```

###### [Nosub V2新版B站持续更新中。。。](https://space.bilibili.com/392428129)

#### Nosub是一个全新的字幕软件 [下载地址](https://github.com/patui/Nosub/releases)

![2dc9e31c83ff9cea41b6f11b3a43f0da](https://github.com/user-attachments/assets/06f21407-f678-4e7e-bea3-d02d72d228fd)

![LLM](https://github.com/user-attachments/assets/cec4727a-0e0d-4e95-aac3-1ad8cf4ae31e)

![Ai- suggest](https://github.com/user-attachments/assets/2ee8db87-ba4d-4e3d-9190-c2edb974efa3)

![A02-N](https://github.com/user-attachments/assets/871fda9a-ad32-4b87-8602-d99953178d5b)

![image](https://github.com/user-attachments/assets/e93ea0c3-5c8f-4a86-ab3d-4974a9be2a2d)


>开发者愿景：让新手上字幕真正变得简单；
---

关于新版的思考：
```
V2新版已经开始做减法，完全专注于字幕编辑软件，
追求极致的字幕编辑和调整效率；
```

###### V2相对于V1版本的改进：
- 基于Cmake构建跨平台的程序，易于维护和重构；
- 基于QT6.5和C++ 20开发；
- 重写视频播放器（新版基于libmpv)，支持硬件解码和变速播放，大幅提升SEEK速度和兼容性；
- 完善字幕编辑器，支持字幕查找和替换功能；
- 优化字幕编辑器的交互逻辑，提升字幕编辑效率；
- 大幅提升字幕加载速度（解析速度）；
- 简化UI交互逻辑；


###### （一）Nosub的支持平台：
- [x] Windows（Windows10，以及Windows 11）
- [x] MacOS (暂时支持m芯片，Intel芯片的用户请耐心等待)
- [x] Linux (完全支持)

###### （二） Nosub的核心组件：
- [x] 视频播放器
- [x] 时间轴（波形图）
- [x] 字幕编辑器；（字幕切割，合并，删除，修改，调整时间）


###### （三）Nosub V2版用到的开源库：
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


![image](https://github.com/user-attachments/assets/43b3c170-5b8c-4e1b-8b44-246498dd58e2)
