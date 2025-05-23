```
官网: https://www.nosub.cn

个人BLOG: https://www.nosub.net

Nosub QQ群：870178887（仅限字幕相关）

```

![2dc9e31c83ff9cea41b6f11b3a43f0da](https://github.com/user-attachments/assets/06f21407-f678-4e7e-bea3-d02d72d228fd)

![A02-N](https://github.com/user-attachments/assets/871fda9a-ad32-4b87-8602-d99953178d5b)

![image](https://github.com/user-attachments/assets/e93ea0c3-5c8f-4a86-ab3d-4974a9be2a2d)


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
- 砍掉了大部分非核心業務，比如語音識別，視頻壓制，查看視頻信息，導出MP3等；
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
- QT 跨平臺的GUI庫；（QT是一個綜合C++庫，不僅僅是GUI）
- libMPV 視頻播放器；
- FFmpeg 音視頻解碼庫；
- Uchardet 文本編碼檢測庫；
- Iconv   文字編碼轉換庫;
- SDL2 渲染库;
- SDL2-ttf 字幕渲染库.
- OpenGL  渲染库
- sherpa-onnx asr语音中间件;
- spdlog 日志库.
- demucs.cpp  Demucs v4的实现



![image](https://github.com/user-attachments/assets/43b3c170-5b8c-4e1b-8b44-246498dd58e2)
