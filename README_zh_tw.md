```
官网: https://www.nosub.cn

个人BLOG: https://www.nosub.net

Nosub QQ群：870178887（仅限字幕相关）

```

###### [中文Readme](https://github.com/patui/Nosub/blob/master/README_zh.md)

###### [繁体中文Readme](https://github.com/patui/Nosub/blob/master/README_zh_tw.md)

![MainUI](https://github.com/user-attachments/assets/957cf6a0-158d-4e20-93b9-66c261a686a2)

![LLM](https://github.com/user-attachments/assets/cec4727a-0e0d-4e95-aac3-1ad8cf4ae31e)
![B01](https://github.com/user-attachments/assets/3dd3079b-756a-4964-96c6-9025277b8344)

![MainUI-BLACK](https://github.com/user-attachments/assets/ab6f11e7-6a78-4e29-980d-bb798d20427a)

![B02](https://github.com/user-attachments/assets/a14284b5-880a-4cc8-8fff-1b57f12dd55a)

![B03](https://github.com/user-attachments/assets/b21036f6-7b37-4a03-8451-cf8494280f8c)

![A02-N](https://github.com/user-attachments/assets/871fda9a-ad32-4b87-8602-d99953178d5b)



###### [Nosub V2新版B站持续更新中。。。](https://space.bilibili.com/392428129)

#### Nosub是一個全新的字幕軟件 [下載地址](https://github.com/patui/Nosub/releases)

>開發者願景：讓新手上字幕真正變得簡單；
---


Nosub的全新V2版本正在開發中，新版測試版會盡快發佈。。。


關於新版的思考：
```
V2新版已經開始做減法，完全專註於字幕編輯軟件，
追求極致的字幕編輯和調整效率；
```


###### V2相對於V1版本的改進：
- 基於Cmake構建跨平臺的程序，易於維護和重構；
- 基於QT6.5和C++ 20開發；
- 重寫視頻播放器（新版基於libmpv)，支持硬件解碼和變速播放，大幅提升SEEK速度和兼容性；
- 完善字幕編輯器，支持字幕查找和替換功能；
- 優化字幕編輯器的交互邏輯，提升字幕編輯效率；
- 大幅提升字幕加載速度（解析速度）；
- 簡化UI交互邏輯；


###### （一）Nosub的支持平臺：
- [x] Windows
- [x] MacOS (Intel芯片请耐心等待)
- [x] Linux

###### （二） Nosub的核心組件：
- [x] 視頻播放器
- [x] 時間軸（波形圖）
- [x] 字幕編輯器；（字幕切割，合併，刪除，修改，調整時間）


###### （三）Nosub V2版用到的開源庫：
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
