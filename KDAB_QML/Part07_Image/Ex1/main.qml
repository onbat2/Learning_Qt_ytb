import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    Rectangle {
        width: 400
        height: 400
        visible: true
        color: "#00a3fc"

        Image{
            x: 150
            y:150
            source: "/Pictures/jellyfish.png"
            width: sourceSize.width * 2
            height: sourceSize.height * 2
            Component.onCompleted: console.log(width, height, sourceSize)
        }
    }
}
