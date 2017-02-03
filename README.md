# qml-material-design-icons
Material design icons for use in Qml, based on version 1.8.36

[Material Design Icons](https://cdn.materialdesignicons.com/1.8.36/)

# Usage
1.copy MaterialIcons.h to your project directory. copy materialdesignicons-webfont.ttf to project resources

2.add material font to application font database
```c++
QFontDatabase fontDB;
fontDB.addApplicationFont(":/assets/font/materialdesignicons-webfont.ttf");
```

3.set context property of qml engine
```c++
engine.rootContext()->setContextProperty("MaterialIcons", new MaterialIcons());
```

4.in qml:
```qml
Text {
    text: MaterialIcons.mdiDelete
    font.family: "Material Design Icons"
}
```

Alternatively you can use MaterialIcons.qml with a `qmldir` file.
