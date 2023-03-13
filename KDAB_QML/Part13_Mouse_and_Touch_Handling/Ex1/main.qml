import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 400
    height: 300
    visible: true
    Rectangle{
        anchors.fill: parent
        color: "lightblue"

        Text {
            text: "Press me"
            x: 175; y: 0
            font.pixelSize: 20
            MouseArea{
                anchors.fill: parent
                //make sure that this mouse area has exactly the size of the text
                onPressed: parent.color = "green"
                onReleased: parent.color = "black"
            }
        }
        Text{
            text: "Click me"
            x: 175; y: 150
            font.pixelSize: 20
            MouseArea{
                anchors.fill: parent
                onClicked: parent.font.bold = !parent.font.bold
            }
        }
    }
}
