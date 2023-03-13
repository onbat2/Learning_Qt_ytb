import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 400
    height: 400
    visible: true
    title: qsTr("Ehe")
    Rectangle{
        width: 400
        height:400
        gradient: Gradient{
            GradientStop{
                position: 0.0; color: "green"
            }
            GradientStop{
                position: 1.0; color: "blue"
            }
        }
    }
}
