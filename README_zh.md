```
官网: https://www.nosub.cn

个人BLOG: https://www.nosub.net

Nosub QQ群：870178887（仅限字幕相关）

```

###### [Nosub V2新版B站持续更新中。。。](https://space.bilibili.com/392428129)

#### Nosub是一个全新的字幕软件 [下载地址](https://github.com/patui/Nosub/releases)

![2dc9e31c83ff9cea41b6f11b3a43f0da](https://github.com/user-attachments/assets/06f21407-f678-4e7e-bea3-d02d72d228fd)

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
- 砍掉了大部分非核心业务，比如语音识别，视频压制，查看视频信息，导出MP3等；
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
- QT 跨平台的GUI库；（QT是一个综合C++库，不仅仅是GUI）
- LibMPV 视频播放器；
- FFmpeg 音视频解码库；
- Uchardet 文本编码检测库；
- Iconv   文字编码转换库;
- SDL2 多媒体渲染库；
- SDL2-ttf 字幕渲染库;
- OpenGL  渲染库
- sherpa-onnx asr语音中间件;
- spdlog 日志库.
- demucs.cpp  Demucs v4的C++实现


![image](https://github.com/user-attachments/assets/43b3c170-5b8c-4e1b-8b44-246498dd58e2)
