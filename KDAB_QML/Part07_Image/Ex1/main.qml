import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 400
    height: 600
    visible: true
    title: qsTr("Hello World")

    Image{
        width: 200
        height: 500
        source: "qrc:/resoursce/jellyfish.png"
    }
}
