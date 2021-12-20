# juce-advent-calendar-2021

A Sample Project for [JUCE Advent Calendar 2021](https://qiita.com/advent-calendar/2021/juce)

## ビルド方法

### macOS 環境

```sh
cd /path/to/develop
git clone https://github.com/hotwatermorning/juce-advent-calendar-2021.git
cd juce-advent-calendar-2021
git submodule update --init

cd Project
cmake -B Build -G Xcode
cmake --build Build --config Release
```
