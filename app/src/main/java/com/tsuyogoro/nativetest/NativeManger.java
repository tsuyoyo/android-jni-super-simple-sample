package com.tsuyogoro.nativetest;

import android.provider.ContactsContract;
import android.util.Log;

/**
 * Created by tsuyoyo on 15/08/04.
 */
public class NativeManger {

    static {
        System.loadLibrary("HelloJni");
    }

    public native String msgFromNDK();

//    public native DataType createDataType(int value, String description);

    public native void seeDataType(DataType data);

    public void callNative() {
        String msg = msgFromNDK();
        Log.i("NativeTestTest", msg);

        DataType dt = new DataType();
        dt.value = 12345;
        dt.description = "DataType description!!";

        seeDataType(dt);
    }

}
