```
官网: https://www.nosub.cn

个人BLOG: https://www.nosub.net

Nosub QQ群：870178887（仅限字幕相关）

```

![image](https://github.com/user-attachments/assets/43b3c170-5b8c-4e1b-8b44-246498dd58e2)


###### [Nosub V2新版B站持续更新中。。。](https://space.bilibili.com/392428129)

#### Nosub是一个全新的字幕软件 [下载地址](https://github.com/patui/Nosub/releases)

###### [中文Readme](https://github.com/patui/Nosub/blob/master/README_zh.md)

###### [繁体中文Readme](https://github.com/patui/Nosub/blob/master/README_zh_tw.md)

![MainUI](https://github.com/user-attachments/assets/957cf6a0-158d-4e20-93b9-66c261a686a2)

![LLM](https://github.com/user-attachments/assets/cec4727a-0e0d-4e95-aac3-1ad8cf4ae31e)
![B01](https://github.com/user-attachments/assets/14701608-985d-4da7-ac87-59306db422b8)

![MainUI-BLACK](https://github.com/user-attachments/assets/ab6f11e7-6a78-4e29-980d-bb798d20427a)

![B02](https://github.com/user-attachments/assets/a14284b5-880a-4cc8-8fff-1b57f12dd55a)

![B03](https://github.com/user-attachments/assets/b21036f6-7b37-4a03-8451-cf8494280f8c)

![A02-N](https://github.com/user-attachments/assets/871fda9a-ad32-4b87-8602-d99953178d5b)



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
