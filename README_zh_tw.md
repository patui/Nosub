#### Nosub是一個全新的字幕軟件 [下載地址](https://github.com/patui/Nosub/releases)


>開發者願景：讓新手上字幕真正變得簡單；
---

###### （一）Nosub的支持平台：
- [x] Windows
- [ ] MacOS (暫時不支持，請耐心等待)
- [ ] Linux (暫時不支持，請耐心等待)

###### （二） Nosub的核心組件：
- [x] 視頻播放器
- [x] 無限滾動時間軸（波形圖）
- [x] 無限滾動字幕編輯器；（字幕切割，合併，刪除，修改，調整時間）

###### （三） Nosub的核心功能：
- [x] 音頻降噪處理；(來自WebRTC)
- [x] 離線語音自動切割；(來自WebRTC)
- [x] 語音識別生成字幕；(兩種模式，一句話識別和文件轉寫)
- [x] 字幕快照；（解決傳統字幕軟件閃退丟失字幕的問題）
- [x] 視頻壓制；（異步任務隊列，支持批量壓制）
- [x] 字幕翻譯；（異步任務隊列，支持批量翻譯）

###### （四）Nosub已經支持的語音識別引擎列表：
```
一句話識別引擎支持列表：
1. Google語音引擎；
2. 百度語音引擎；（百度極速版和普通版）
3. 有道語音引擎；

語音文件轉寫引擎支持列表：（即音/視頻直接轉字幕）
1. 阿里雲語音文件轉寫；
2. 訊飛語音文件轉寫；
3. 騰訊語音文件轉寫；
4. 百度語音文件轉寫；
```

語音文件轉寫價格以及賬號配置可以參考這篇下面的兩個：
- configcore.json的配置文件說明：[configcore.json的配置文件說明](https://github.com/patui/Nosub/blob/master/configcore.md)
- nosub beta7更新說明：[nosub beta7更新說明](https://github.com/patui/Nosub/releases/tag/1.0beta7)

###### （五）Nosub已經支持的字幕翻譯引擎列表：
- [x] 百度翻譯引擎;

###### （六）Nosub用到的開源庫：(截止到2020年10月1日)
- QT 跨平台的GUI庫；（QT是一個綜合C++庫，不僅僅是GUI）
- CppRestSDK 微軟C++ 11風格的HTTP請求庫；
- FFmpeg 音視頻解碼庫；
- H.264  H264編解碼庫；
- H.265  H265編解碼庫；
- Mp3lame Mp3編解碼庫;
- Fdk-aac AAC編解碼庫;
- Libass 字幕渲染庫;
- Uchardet 文本編碼檢測庫；
- Iconv   文字編碼轉換庫;
- Fontconfig 字體配置庫;
- Freetype   字體渲染庫;
- OpenSSL SSL通信加密庫;
- WebRTC Chrome實時音視頻庫；
- SDL2 多媒體渲染庫；
- SDL2-ttf 字幕渲染庫;
- Spdlog 日誌記錄庫;
- MediaInfo 查看音視頻信息庫；


[Nosub开发者推荐的其它字幕制作平台](https://github.com/patui/Nosub/blob/master/推荐的字幕制作平台.md)
