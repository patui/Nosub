Nosub是一个字幕软件，以字幕编辑，调整为核心，支持离线语音识别，已经全面接入LLM大模型做字幕处理。

> 开发者愿景：让新手上字幕真正变得简单；


```
官网: https://www.nosub.cn 

个人BLOG: https://www.nosub.net

Nosub QQ群：870178887（仅限字幕相关）

```

#### 演示视频

- [Nosub中使用DeepSeek大模型做字幕校对](https://www.bilibili.com/video/BV1S8rDBFEFX)

#### [软件下载](https://github.com/patui/Nosub/releases)


---

###### 主要特点
- 基于C++和QT开发
- 极简的UI风格
- 对新手友好，容易上手
- 支持黑、白主题切换
- 极高的字幕编辑，调整效率
- 支持音频、视频切片导出
- 集成单语、双语字幕合成功能
- 集成sense-voice，fireredASR，whisper，parakeet，funasr-nano-asr等离线语音识别
- 支持中，英，粤语，日语，韩语等语言的语音识别
- 支持LLM大模型智能断句，字幕校对，字幕翻译功能
- 支持批量语音识别

###### （一）Nosub的支持平台：
- [x] Windows fox x64（Windows10，版本号 >=1809，QT6限制，以及Windows 11）
- [x] MacOS (arm x64 M芯片，macOS 15+)
- [x] Linux (x64  ldd (GNU libc) >=2.34)
- [x] 国产银河麒麟V10SP1 (x64  ldd (GNU libc) >=2.31)
- [ ] MacOS (Intel芯片)
- [ ] Windows fox arm 64 （暂时没有开发机）
- [ ] Linux fox arm 64 （暂时没有开发机）

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

QQ讨论群（最新的内测版本）

![image](https://github.com/user-attachments/assets/43b3c170-5b8c-4e1b-8b44-246498dd58e2)

主界面

![MainUI](https://github.com/user-attachments/assets/957cf6a0-158d-4e20-93b9-66c261a686a2)

LLM大模型字幕校对

![LLM](https://github.com/user-attachments/assets/cec4727a-0e0d-4e95-aac3-1ad8cf4ae31e)

字幕校对修改界面

![B01](https://github.com/user-attachments/assets/14701608-985d-4da7-ac87-59306db422b8)

黑色主题

![MainUI-BLACK](https://github.com/user-attachments/assets/ab6f11e7-6a78-4e29-980d-bb798d20427a)

黑色主题-播放器在右边

![MainUI-BLACK-Right](https://github.com/user-attachments/assets/9ad7fff1-4cc1-4e4e-bbe8-14931027dec1)

LLM大模型字幕翻译
![B02](https://github.com/user-attachments/assets/a14284b5-880a-4cc8-8fff-1b57f12dd55a)

LLM大模型字幕智能断句
![B03](https://github.com/user-attachments/assets/b21036f6-7b37-4a03-8451-cf8494280f8c)

字幕编辑调整
![A02-N](https://github.com/user-attachments/assets/871fda9a-ad32-4b87-8602-d99953178d5b)



