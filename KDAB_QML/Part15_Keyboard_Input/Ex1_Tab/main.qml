import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 200
    height: 112
    visible: true
    color: "lightblue"

    TextInput{
        anchors.left: parent.left; y: 16
        anchors.right: parent.right
        text: "Case 1"; font.pixelSize: 32
        color: activeFocus ? "black" : "gray"
        focus: true
        activeFocusOnTab: true
    }
    TextInput{
        anchors.left: parent.left; y: 64
        anchors.right: parent.right
        text: "Case 2"; font.pixelSize: 32
        color: activeFocus ? "black" : "gray"
        //ko co focus
        activeFocusOnTab: true
    }
}
