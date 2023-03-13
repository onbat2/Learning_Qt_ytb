import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 680
    height: 240
    visible: true

    Rectangle{
        id: focusBox
        anchors{
            verticalCenter: parent.verticalCenter
            left: parent.left
            leftMargin: 20
        }
        width: 200; height:200
        color: focusArea.containsMouse ? "green" : "cyan"
        Text{
            anchors.centerIn: parent
            text: "Observe my color"
        }
    }

    Rectangle{
        anchors.centerIn: parent
        width: 200; height: 200
        color: "yellow"
        MouseArea{
            id: focusArea
            anchors.fill: parent
            hoverEnabled: true
        }
        Text{
            anchors.centerIn: parent
            text: "  Move\ninto me"
        }
    }

    Rectangle{
        anchors{
            verticalCenter: parent.verticalCenter
            right: parent.right
            rightMargin: 20
        }
        width: 200; height:200
        color: "black"

        MouseArea{
            id: clickArea
            anchors.fill: parent
            onClicked:focusBox.color = "orange"
        }
        Text{
            color: "white"
            anchors.centerIn: parent
            text: "Click\n me"
        }
    }
}
