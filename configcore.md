程序目录下有两个配置文件
- config.ini 配置一句话语音识别;
- configcore.json 配置语音文件转字幕的配置;

configcore.json的格式如下;


###### IFlyAudioFileASREngine表示讯飞的语音账号;
- EngineGroup语音账号列表;
- LanguageSuportList 语音账号识别支持的语言;

> 讯飞语音的账号申请可以参考这篇：[讯飞语音接入](https://www.xfyun.cn/doc/platform/quickguide.html)

###### AliYunAudioFileASREngine表示阿里的语音账号;
- EngineGroup飞语音账号列表;
- 阿里的识别语言由Appkey决定;

> 阿里云语音的账号申请可以参考这篇：[阿里云语音接入](https://help.aliyun.com/document_detail/69835.html)

###### TencentCloudAudioFileASREngine表示腾讯的语音账号;
- EngineGroup语音账号列表;
- LanguageSuportList 语音账号识别支持的语言;

> 腾讯的账号申请可以参考这篇：[腾讯语音接入](https://cloud.tencent.com/document/product/1093/35691)

###### BaiduAiAudioFileASREngine表示百度的语音账号;
- EngineGroup语音账号列表;
- LanguageSuportList 语音账号识别支持的语言;

> 百度语音的账号申请可以参考这篇：[百度语音](https://ai.baidu.com/ai-doc/REFERENCE/Ck3dwjgn3)

###### ALiYunOSSCloudFileStorage表示阿里云的对象存储;
> 阿里云对象存储的账号申请可以参考这篇：[阿里云对象存储OS接入](https://www.aliyun.com/product/oss)

###### BaiduTranslation表示百度的翻译引擎配置;
> 百度翻的账号申请可以参考这篇：[百度翻译](https://api.fanyi.baidu.com/)

Name：界面显示的引擎名称；
Language 暂时用不到，可以无视;

```
{
	"AudioFileASREngineGroup": {
		"IFlyAudioFileASREngine": {
			"EngineGroup": [
				{
					"Name": "IFlyAccount1",
					"APPID": "xxxxxx",
					"SecretKey": "xxxxxx",
					"Language": "zh"
				},
				{
					"Name": "IFlyAccount2",
					"APPID": "xxxxxx",
					"SecretKey": "xxxxxx",
					"Language": "zh"
				}
			],
			"LanguageSuportList": [
				{
					"Name": "中文",
					"Value": "cn"
				},
				{
					"Name": "英文",
					"Value": "en"
				}
			]
		},
		"AliYunAudioFileASREngine": {
			"EngineGroup": [
				{
					"Name": "阿里云中文",
					"Appkey": "xxxxxx",
					"AccessKeyId": "xxxxxx",
					"AccessKeySecret": "xxxxxx",
					"Language": "zh"
				},
				{
					"Name": "阿里云粤语",
					"Appkey": "xxxxxx",
					"AccessKeyId": "xxxxxx",
					"AccessKeySecret": "xxxxxx",
					"Language": "zh"
				},
				{
					"Name": "阿里云英语",
					"Appkey": "xxxxxx",
					"AccessKeyId": "xxxxxx",
					"AccessKeySecret": "xxxxxx",
					"Language": "zh"
				}
			]
		},
		"TencentCloudAudioFileASREngine": {
			"EngineGroup": [
				{
					"Name": "TencentAccount",
					"SecretId": "xxxxxx",
					"SecretKey": "xxxxxx",
					"Language": "zh"
				}
			],
			"LanguageSuportList": [
				{
					"Name": "中文普通话通用",
					"Value": "16k_zh"
				},
				{
					"Name": "音视频领域",
					"Value": "16k_zh_video"
				},
				{
					"Name": "英语",
					"Value": "16k_en"
				},
				{
					"Name": "粤语",
					"Value": "16k_ca"
				},
				{
					"Name": "日语",
					"Value": "16k_ja"
				},
				{
					"Name": "上海话方言",
					"Value": "16k_wuu-SH"
				}
			]
		},
		"BaiduAiAudioFileASREngine": {
			"EngineGroup": [
				{
					"Name": "BaiduAccount",
					"AppId": "xxxxxx",
					"AppKey": "xxxxxx",
					"AppSecret": "xxxxxx",
					"Language": "zh"
				}
			],
			"LanguageSuportList": [
				{
					"Name": "中文普通话",
					"Value": "80001"
				},
				{
					"Name": "英文",
					"Value": "1737"
				}
			]
		}
	},
	"CloudFileStorage": {
		"ALiYunOSSCloudFileStorage": {
			"AccessKeyId": "xxxxxx",
			"AccessKeySecret": "xxxxxx",
			"Endpoint": "https://oss-cn-hangzhou.aliyuncs.com",
			"BucketName": "xxxxxx"
		}
	},
	"TranslationGroup": {
		"BaiduTranslation": {
			"Name": "Baidu",
			"AppId": "xxxxxx",
			"SecretKey": "xxxxxx"
		}
	}
}
```
