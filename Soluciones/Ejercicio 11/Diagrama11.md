classDiagram
    Dispositivo <|-- Tablet
    Dispositivo <|-- Telefono
    Tablet <|-- Smartphone
    Telefono <|-- Smartphone

    class Dispositivo {
        +string marca
    }
    class Tablet {
    }
    class Telefono {
    }
    class Smartphone {
    }