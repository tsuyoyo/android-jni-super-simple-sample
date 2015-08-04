# JNIを作ってみる

## 参考サイト
- [javahの使い方](http://blog.livedoor.jp/appzm-himself/archives/6637258.html)
  - android側でnativeの宣言を行った後、javahというコマンドでheaderを作成
  - javahにはclassファイルを食わせる必要があるので、gradlew buildでビルドを予め行う
  - app/build/intermediate/debug 配下に出来上がるので、それを指定
  - ```$ javah -classpath app/build/intermediates/classes/debug/ -d jni com.tsuyogoro.nativetest.NativeManger```

## はまった
- ndk-buildをしてできあがった.soの名前は (XXXと指定した場合) libXXX となるが、最初のlibは無視してOK (逆に無視しないとダメ)