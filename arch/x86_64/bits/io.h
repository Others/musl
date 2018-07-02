void outb(unsigned char __val, unsigned short __port);

void outw(unsigned short __val, unsigned short __port);

void outl(unsigned int __val, unsigned short __port);

unsigned char inb(unsigned short __port);

unsigned short inw(unsigned short __port);

unsigned int inl(unsigned short __port);

void outsb(unsigned short __port, const void *__buf, unsigned long __n);

void outsw(unsigned short __port, const void *__buf, unsigned long __n);

void outsl(unsigned short __port, const void *__buf, unsigned long __n);

void insb(unsigned short __port, void *__buf, unsigned long __n);

void insw(unsigned short __port, void *__buf, unsigned long __n);

void insl(unsigned short __port, void *__buf, unsigned long __n);
