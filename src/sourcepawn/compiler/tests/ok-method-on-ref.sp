native CloseHandle(Handle:handle);

methodmap Handle {
	public native void Close();
};

f(&Handle:x)
{
	x.Close()
}

public main()
{
	new Handle:x;
	f(x)
}
