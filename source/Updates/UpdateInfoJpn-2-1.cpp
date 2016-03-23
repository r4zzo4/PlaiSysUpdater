//
// Created by cpasjuste on 12/01/16.
//

#include "UpdateInfoJpn-2-1.h"

UpdateInfoJpn21::UpdateInfoJpn21(int deviceType) {

    this->region = "JPN";
    this->version = "2.1.0-4";

    if (deviceType == 2 || deviceType == 4) {

        this->model = "n3DS";

        items.push_back(UpdateItem("A521AD3FFE8B1B5A338DD45AF833A7C2", "/updates/0004001000020000.cia"));
        items.push_back(UpdateItem("152029D13761555D24F50BCEB8F991DC", "/updates/0004001000020100.cia"));
        items.push_back(UpdateItem("96F4E74D598CDBFE5CD451E96CD4FAFE", "/updates/0004001000020200.cia"));
        items.push_back(UpdateItem("ABD988A68150A0C4B2982A9537E95D3B", "/updates/0004001000020300.cia"));
        items.push_back(UpdateItem("94E13066CF3139A49336C88D5DC8B0D6", "/updates/0004001000020400.cia"));
        items.push_back(UpdateItem("A5F389E64E70B60AB8E59749CA6E6E90", "/updates/0004001000020500.cia"));
        items.push_back(UpdateItem("221A91E1E5415AF8AAE017EBFF633673", "/updates/0004001000020700.cia"));
        items.push_back(UpdateItem("ACA7AEB0166C6457EB30A02BCA7943F0", "/updates/0004001000020900.cia"));
        items.push_back(UpdateItem("F3C292E56BEA014E795FD4270C757C7E", "/updates/0004001000020A00.cia"));
        items.push_back(UpdateItem("6EF20CF7CB3341C56E38916D2F9909E8", "/updates/0004001000020B00.cia"));
        items.push_back(UpdateItem("785D5E34503F6B6A47147A339FF36F00", "/updates/0004001000020D00.cia"));
        items.push_back(UpdateItem("C2E3078D90A82F3398CEC7A5A9067946", "/updates/0004001000020E00.cia"));
        items.push_back(UpdateItem("BBF0C295C1D766BA4B31C8EB50AC0AA9", "/updates/0004001000020F00.cia"));
        items.push_back(UpdateItem("165857035AC433C23DBD93BA2A71F940", "/updates/0004001000023000.cia"));
        items.push_back(UpdateItem("E8CAE7DD5C8C4D5A7D453F1A1E806AB1", "/updates/0004001B00010002.cia"));
        items.push_back(UpdateItem("22D62FEAF1985C1F15AA3F23D7A50C8D", "/updates/0004003000008202.cia"));
        items.push_back(UpdateItem("725B33AA10345E39E15AD15B864C7F12", "/updates/0004003000008402.cia"));
        items.push_back(UpdateItem("F075D1EDEE488612E4DC6A450E9CF965", "/updates/0004003000008602.cia"));
        items.push_back(UpdateItem("052E03A7EDB620B08D851CAECB26CC0B", "/updates/0004003000008702.cia"));
        items.push_back(UpdateItem("722CC8E272B7F22073A651A1DA5C1173", "/updates/0004003000008802.cia"));
        items.push_back(UpdateItem("BB801599797B606F7E06FF135A3F41DE", "/updates/0004003000008A02.cia"));
        items.push_back(UpdateItem("4302C1686DA2314EE370BE48FBB8BA97", "/updates/0004003000008A03.cia"));
        items.push_back(UpdateItem("719C4604609148505BA2D7FC389A78D3", "/updates/0004003000008D02.cia"));
        items.push_back(UpdateItem("FC3F13F3018338D7DC8902B3B54A5CC2", "/updates/0004003000008E02.cia"));
        items.push_back(UpdateItem("37882AE783B48A70B117C6CF2CED39FD", "/updates/000400300000C002.cia"));
        items.push_back(UpdateItem("A03E3137B71E1CC6E865A63867D715D9", "/updates/000400300000C003.cia"));
        items.push_back(UpdateItem("73234BB4400CF16005F28850F1588B52", "/updates/000400300000C102.cia"));
        items.push_back(UpdateItem("36A49AD74C20931AE257E5772D437FFE", "/updates/000400300000C302.cia"));
        items.push_back(UpdateItem("5E56DC4E15975079DEFD0EC27CA0CD89", "/updates/000400300000C402.cia"));
        items.push_back(UpdateItem("48DFAD4D2A5370A4C61054106110DD63", "/updates/000400300000C502.cia"));
        items.push_back(UpdateItem("6E06F9F68B216866DE6110883FD5B6AF", "/updates/000400300000C503.cia"));
        items.push_back(UpdateItem("B36876609C4362AE28211C0C3DA46045", "/updates/0004009B00010202.cia"));
        items.push_back(UpdateItem("86377211D8425336D87E0233C47E74BC", "/updates/0004009B00010402.cia"));
        items.push_back(UpdateItem("6D7673C8487DC231002F1DDC6EE79BF3", "/updates/0004009B00010602.cia"));
        items.push_back(UpdateItem("640B31DD4164F619720A57D4697805C6", "/updates/0004009B00011902.cia"));
        items.push_back(UpdateItem("58AA8A37E2DCAA5DF16E6B92C68EBF51", "/updates/0004009B00012202.cia"));
        items.push_back(UpdateItem("0392213ED5E778246DAE3D64B9E9A99B", "/updates/0004009B00013202.cia"));
        items.push_back(UpdateItem("7970C352474532E7B1738E9988B5F09A", "/updates/0004009B00014002.cia"));
        items.push_back(UpdateItem("C11CCD5C2045BFD8785F05AC7B63EAC5", "/updates/0004009B00014102.cia"));
        items.push_back(UpdateItem("B47DFA2283CB3ECE2B65E39D23CACC2A", "/updates/0004009B00014202.cia"));
        items.push_back(UpdateItem("35426B2868AD37C5AA70B269756D1D38", "/updates/0004009B00014302.cia"));
        items.push_back(UpdateItem("E03234473762706F20ED397F5AE47DDE", "/updates/0004009B00015202.cia"));
        items.push_back(UpdateItem("19F63A2994A8B140D2E05E2E29246E9A", "/updates/000400DB00010302.cia"));
        items.push_back(UpdateItem("D3BC5134A0D81096EC98156CD9FADDEF", "/updates/000400DB00010502.cia"));
        items.push_back(UpdateItem("8733B69FF900EF50226758F0CF4A7AF5", "/updates/000400DB00016202.cia"));
        items.push_back(UpdateItem("72678B9799CB6179C182A61F6511E067", "/updates/000400DB00017202.cia"));
        items.push_back(UpdateItem("1B47F3425ABD5C7B6C520CC2457521AC", "/updates/0004013000001502.cia"));
        items.push_back(UpdateItem("69D36484AD3B32EA6179CBE00423B937", "/updates/0004013000001503.cia"));
        items.push_back(UpdateItem("C51856EC56A1521965813293ABA7B8AB", "/updates/0004013000001602.cia"));
        items.push_back(UpdateItem("445D1A888D992A20AAA0BDD7882446F0", "/updates/0004013000001702.cia"));
        items.push_back(UpdateItem("D091987ACD5BFEB60778E1A1F36AC07D", "/updates/0004013000001703.cia"));
        items.push_back(UpdateItem("07E6545BA8961509EA24B97A20A19D06", "/updates/0004013000001802.cia"));
        items.push_back(UpdateItem("7D9B40BDFDB0E21CB920DF026C560C3F", "/updates/0004013000001803.cia"));
        items.push_back(UpdateItem("648EC2148FAA77DBDA1F0C56DFA83329", "/updates/0004013000001A02.cia"));
        items.push_back(UpdateItem("94CD6BB6EFB2CE35F279FA5C3AF0F4CA", "/updates/0004013000001A03.cia"));
        items.push_back(UpdateItem("B0BEFB8D1000FD0D39347A365FC9AAF8", "/updates/0004013000001B02.cia"));
        items.push_back(UpdateItem("9FB5C904CAD65A87FB6720BF4730AF8B", "/updates/0004013000001B03.cia"));
        items.push_back(UpdateItem("3F9836DE937D195EAAB058712284A8CC", "/updates/0004013000001C02.cia"));
        items.push_back(UpdateItem("1CD5C8BB84097198EE83B832B14CCC99", "/updates/0004013000001C03.cia"));
        items.push_back(UpdateItem("59778C9884A7BC20921614AEC0F95DB9", "/updates/0004013000001D02.cia"));
        items.push_back(UpdateItem("6E4DC80CBF34824B584208B57C97D3CC", "/updates/0004013000001D03.cia"));
        items.push_back(UpdateItem("E2CEF3EB4E4D74713828E75914D32A35", "/updates/0004013000001E02.cia"));
        items.push_back(UpdateItem("5B41FFC08DAC696AA7BDDE15485F9067", "/updates/0004013000001E03.cia"));
        items.push_back(UpdateItem("01718E0D787853AF02C6232165A97D7E", "/updates/0004013000001F02.cia"));
        items.push_back(UpdateItem("9C98936D8BA02DB18FEA0A4CFE203220", "/updates/0004013000001F03.cia"));
        items.push_back(UpdateItem("C0F8D036B0FE7457470A194B9D9EADED", "/updates/0004013000002002.cia"));
        items.push_back(UpdateItem("111BBD681F0950206A9FCC21E25BAB89", "/updates/0004013000002102.cia"));
        items.push_back(UpdateItem("22DB18022CD83F0696BB8EC594EB9958", "/updates/0004013000002103.cia"));
        items.push_back(UpdateItem("28F07576789B44713BB646E5B04F2FFD", "/updates/0004013000002202.cia"));
        items.push_back(UpdateItem("370090EF93B810585F20D6FB57EC6D9D", "/updates/0004013000002203.cia"));
        items.push_back(UpdateItem("B3527B5626AFAF2F265916CFB010DA5D", "/updates/0004013000002302.cia"));
        items.push_back(UpdateItem("88E8D05C03C8ABE7F90488FFCDC4542C", "/updates/0004013000002303.cia"));
        items.push_back(UpdateItem("4F9F66934955A7ADBD93E97EDADC1BB5", "/updates/0004013000002402.cia"));
        items.push_back(UpdateItem("51FDB8536EB83762B4DD57800CDE08A0", "/updates/0004013000002403.cia"));
        items.push_back(UpdateItem("49BDAB680C5EF513FD1CE51628C799BA", "/updates/0004013000002602.cia"));
        items.push_back(UpdateItem("7309A0B3377BA1369B5ED88E0814307C", "/updates/0004013000002702.cia"));
        items.push_back(UpdateItem("F4992A20462A4A41AEF37D897AEA9B08", "/updates/0004013000002703.cia"));
        items.push_back(UpdateItem("A3F0BD4280F0AE7CFA3CF6747F9DB3C7", "/updates/0004013000002802.cia"));
        items.push_back(UpdateItem("BD042AEDF12EBA60471276E7EA9C3AEE", "/updates/0004013000002902.cia"));
        items.push_back(UpdateItem("FCA89DDC17E3E892516B0F81B8958743", "/updates/0004013000002903.cia"));
        items.push_back(UpdateItem("56DF1365F74AB590E01998B59B8F3D6E", "/updates/0004013000002A02.cia"));
        items.push_back(UpdateItem("65B0A9AE7D7B27BDEEBB6433B6B838F4", "/updates/0004013000002A03.cia"));
        items.push_back(UpdateItem("AA084ADE84FBA71754D2F400080461E4", "/updates/0004013000002B02.cia"));
        items.push_back(UpdateItem("076F92EAB88AA7FE8B15CE214B3DC9D7", "/updates/0004013000002C02.cia"));
        items.push_back(UpdateItem("0616E72CCC3132A6B78BCA6356CAAFC5", "/updates/0004013000002C03.cia"));
        items.push_back(UpdateItem("8B8B762282FA11064DBBDF62C955B5D7", "/updates/0004013000002D02.cia"));
        items.push_back(UpdateItem("E4241DB05B381A418C9946CCB6544880", "/updates/0004013000002D03.cia"));
        items.push_back(UpdateItem("64B50BE151513052186A6E9B5D33E09E", "/updates/0004013000002E02.cia"));
        items.push_back(UpdateItem("14F24E1BA6F840680CA4FA7D9B69B6F1", "/updates/0004013000002E03.cia"));
        items.push_back(UpdateItem("A1634C4EBDE169C55C976670899A5792", "/updates/0004013000002F02.cia"));
        items.push_back(UpdateItem("14D067ECB8FA9180E59EE839A1FB83B0", "/updates/0004013000002F03.cia"));
        items.push_back(UpdateItem("8288B9DFFD5094A15EA30B572ED3514E", "/updates/0004013000003102.cia"));
        items.push_back(UpdateItem("D85788AEFB07B6C07B1DA9B84EE017B1", "/updates/0004013000003103.cia"));
        items.push_back(UpdateItem("152DC04C6818B7015080FED4FF764996", "/updates/0004013000003202.cia"));
        items.push_back(UpdateItem("69E1981ACEA2949DA61EC2612EF5A6C8", "/updates/0004013000003203.cia"));
        items.push_back(UpdateItem("77BC88BF4920AB2A3374DAE426F95DA4", "/updates/0004013000003302.cia"));
        items.push_back(UpdateItem("59050620268E9409D8678AB04B366288", "/updates/0004013000003303.cia"));
        items.push_back(UpdateItem("8677D5ABB45DD8DC6363084A0D122355", "/updates/0004013000003402.cia"));
        items.push_back(UpdateItem("91C5EE12C288575E1BEDBA509B241EB7", "/updates/0004013000003502.cia"));
        items.push_back(UpdateItem("3FAC9782CC5BF6C53059EDD6BE4F0F97", "/updates/0004013000003702.cia"));
        items.push_back(UpdateItem("17597F6112D5B464ADE752D1BBA57007", "/updates/0004013000008002.cia"));
        items.push_back(UpdateItem("A020ED9D40DD8B592551CE98EDEFAC9F", "/updates/0004013000008003.cia"));
        items.push_back(UpdateItem("0C87B77FFD56A21C09EFE8E510966D17", "/updates/0004013800000002.cia"));
        items.push_back(UpdateItem("CBE759D0FE2407E821CF16ACF00D012D", "/updates/0004013800000003.cia"));
        items.push_back(UpdateItem("066A5CE2DB86494A078B4820A0D94A9B", "/updates/0004013800000102.cia"));
        items.push_back(UpdateItem("19D1B2369C1DE20EE46C12D7F1F7677B", "/updates/0004800542383841.cia"));
        items.push_back(UpdateItem("488F4EC7D3686042DE8D3537D24F8EC1", "/updates/00048005484E4441.cia"));
        items.push_back(UpdateItem("E639DFC1F1B6BE51A6467B0E2E281E54", "/updates/0004800F484E4841.cia"));
        items.push_back(UpdateItem("19208AD79EC6C262573448E10A754E5E", "/updates/0004800F484E4C41.cia"));

    } else {

        this->model = "o3DS";

        items.push_back(UpdateItem("A521AD3FFE8B1B5A338DD45AF833A7C2", "/updates/0004001000020000.cia"));
        items.push_back(UpdateItem("152029D13761555D24F50BCEB8F991DC", "/updates/0004001000020100.cia"));
        items.push_back(UpdateItem("96F4E74D598CDBFE5CD451E96CD4FAFE", "/updates/0004001000020200.cia"));
        items.push_back(UpdateItem("ABD988A68150A0C4B2982A9537E95D3B", "/updates/0004001000020300.cia"));
        items.push_back(UpdateItem("94E13066CF3139A49336C88D5DC8B0D6", "/updates/0004001000020400.cia"));
        items.push_back(UpdateItem("A5F389E64E70B60AB8E59749CA6E6E90", "/updates/0004001000020500.cia"));
        items.push_back(UpdateItem("221A91E1E5415AF8AAE017EBFF633673", "/updates/0004001000020700.cia"));
        items.push_back(UpdateItem("ACA7AEB0166C6457EB30A02BCA7943F0", "/updates/0004001000020900.cia"));
        items.push_back(UpdateItem("F3C292E56BEA014E795FD4270C757C7E", "/updates/0004001000020A00.cia"));
        items.push_back(UpdateItem("6EF20CF7CB3341C56E38916D2F9909E8", "/updates/0004001000020B00.cia"));
        items.push_back(UpdateItem("785D5E34503F6B6A47147A339FF36F00", "/updates/0004001000020D00.cia"));
        items.push_back(UpdateItem("C2E3078D90A82F3398CEC7A5A9067946", "/updates/0004001000020E00.cia"));
        items.push_back(UpdateItem("BBF0C295C1D766BA4B31C8EB50AC0AA9", "/updates/0004001000020F00.cia"));
        items.push_back(UpdateItem("165857035AC433C23DBD93BA2A71F940", "/updates/0004001000023000.cia"));
        items.push_back(UpdateItem("E8CAE7DD5C8C4D5A7D453F1A1E806AB1", "/updates/0004001B00010002.cia"));
        items.push_back(UpdateItem("22D62FEAF1985C1F15AA3F23D7A50C8D", "/updates/0004003000008202.cia"));
        items.push_back(UpdateItem("725B33AA10345E39E15AD15B864C7F12", "/updates/0004003000008402.cia"));
        items.push_back(UpdateItem("F075D1EDEE488612E4DC6A450E9CF965", "/updates/0004003000008602.cia"));
        items.push_back(UpdateItem("052E03A7EDB620B08D851CAECB26CC0B", "/updates/0004003000008702.cia"));
        items.push_back(UpdateItem("722CC8E272B7F22073A651A1DA5C1173", "/updates/0004003000008802.cia"));
        items.push_back(UpdateItem("BB801599797B606F7E06FF135A3F41DE", "/updates/0004003000008A02.cia"));
        items.push_back(UpdateItem("4302C1686DA2314EE370BE48FBB8BA97", "/updates/0004003000008A03.cia"));
        items.push_back(UpdateItem("719C4604609148505BA2D7FC389A78D3", "/updates/0004003000008D02.cia"));
        items.push_back(UpdateItem("FC3F13F3018338D7DC8902B3B54A5CC2", "/updates/0004003000008E02.cia"));
        items.push_back(UpdateItem("37882AE783B48A70B117C6CF2CED39FD", "/updates/000400300000C002.cia"));
        items.push_back(UpdateItem("A03E3137B71E1CC6E865A63867D715D9", "/updates/000400300000C003.cia"));
        items.push_back(UpdateItem("73234BB4400CF16005F28850F1588B52", "/updates/000400300000C102.cia"));
        items.push_back(UpdateItem("36A49AD74C20931AE257E5772D437FFE", "/updates/000400300000C302.cia"));
        items.push_back(UpdateItem("5E56DC4E15975079DEFD0EC27CA0CD89", "/updates/000400300000C402.cia"));
        items.push_back(UpdateItem("48DFAD4D2A5370A4C61054106110DD63", "/updates/000400300000C502.cia"));
        items.push_back(UpdateItem("6E06F9F68B216866DE6110883FD5B6AF", "/updates/000400300000C503.cia"));
        items.push_back(UpdateItem("B36876609C4362AE28211C0C3DA46045", "/updates/0004009B00010202.cia"));
        items.push_back(UpdateItem("86377211D8425336D87E0233C47E74BC", "/updates/0004009B00010402.cia"));
        items.push_back(UpdateItem("6D7673C8487DC231002F1DDC6EE79BF3", "/updates/0004009B00010602.cia"));
        items.push_back(UpdateItem("640B31DD4164F619720A57D4697805C6", "/updates/0004009B00011902.cia"));
        items.push_back(UpdateItem("58AA8A37E2DCAA5DF16E6B92C68EBF51", "/updates/0004009B00012202.cia"));
        items.push_back(UpdateItem("0392213ED5E778246DAE3D64B9E9A99B", "/updates/0004009B00013202.cia"));
        items.push_back(UpdateItem("7970C352474532E7B1738E9988B5F09A", "/updates/0004009B00014002.cia"));
        items.push_back(UpdateItem("C11CCD5C2045BFD8785F05AC7B63EAC5", "/updates/0004009B00014102.cia"));
        items.push_back(UpdateItem("B47DFA2283CB3ECE2B65E39D23CACC2A", "/updates/0004009B00014202.cia"));
        items.push_back(UpdateItem("35426B2868AD37C5AA70B269756D1D38", "/updates/0004009B00014302.cia"));
        items.push_back(UpdateItem("E03234473762706F20ED397F5AE47DDE", "/updates/0004009B00015202.cia"));
        items.push_back(UpdateItem("19F63A2994A8B140D2E05E2E29246E9A", "/updates/000400DB00010302.cia"));
        items.push_back(UpdateItem("D3BC5134A0D81096EC98156CD9FADDEF", "/updates/000400DB00010502.cia"));
        items.push_back(UpdateItem("8733B69FF900EF50226758F0CF4A7AF5", "/updates/000400DB00016202.cia"));
        items.push_back(UpdateItem("72678B9799CB6179C182A61F6511E067", "/updates/000400DB00017202.cia"));
        items.push_back(UpdateItem("1B47F3425ABD5C7B6C520CC2457521AC", "/updates/0004013000001502.cia"));
        items.push_back(UpdateItem("69D36484AD3B32EA6179CBE00423B937", "/updates/0004013000001503.cia"));
        items.push_back(UpdateItem("C51856EC56A1521965813293ABA7B8AB", "/updates/0004013000001602.cia"));
        items.push_back(UpdateItem("445D1A888D992A20AAA0BDD7882446F0", "/updates/0004013000001702.cia"));
        items.push_back(UpdateItem("D091987ACD5BFEB60778E1A1F36AC07D", "/updates/0004013000001703.cia"));
        items.push_back(UpdateItem("07E6545BA8961509EA24B97A20A19D06", "/updates/0004013000001802.cia"));
        items.push_back(UpdateItem("7D9B40BDFDB0E21CB920DF026C560C3F", "/updates/0004013000001803.cia"));
        items.push_back(UpdateItem("648EC2148FAA77DBDA1F0C56DFA83329", "/updates/0004013000001A02.cia"));
        items.push_back(UpdateItem("94CD6BB6EFB2CE35F279FA5C3AF0F4CA", "/updates/0004013000001A03.cia"));
        items.push_back(UpdateItem("B0BEFB8D1000FD0D39347A365FC9AAF8", "/updates/0004013000001B02.cia"));
        items.push_back(UpdateItem("9FB5C904CAD65A87FB6720BF4730AF8B", "/updates/0004013000001B03.cia"));
        items.push_back(UpdateItem("3F9836DE937D195EAAB058712284A8CC", "/updates/0004013000001C02.cia"));
        items.push_back(UpdateItem("1CD5C8BB84097198EE83B832B14CCC99", "/updates/0004013000001C03.cia"));
        items.push_back(UpdateItem("59778C9884A7BC20921614AEC0F95DB9", "/updates/0004013000001D02.cia"));
        items.push_back(UpdateItem("6E4DC80CBF34824B584208B57C97D3CC", "/updates/0004013000001D03.cia"));
        items.push_back(UpdateItem("E2CEF3EB4E4D74713828E75914D32A35", "/updates/0004013000001E02.cia"));
        items.push_back(UpdateItem("5B41FFC08DAC696AA7BDDE15485F9067", "/updates/0004013000001E03.cia"));
        items.push_back(UpdateItem("01718E0D787853AF02C6232165A97D7E", "/updates/0004013000001F02.cia"));
        items.push_back(UpdateItem("9C98936D8BA02DB18FEA0A4CFE203220", "/updates/0004013000001F03.cia"));
        items.push_back(UpdateItem("C0F8D036B0FE7457470A194B9D9EADED", "/updates/0004013000002002.cia"));
        items.push_back(UpdateItem("111BBD681F0950206A9FCC21E25BAB89", "/updates/0004013000002102.cia"));
        items.push_back(UpdateItem("22DB18022CD83F0696BB8EC594EB9958", "/updates/0004013000002103.cia"));
        items.push_back(UpdateItem("28F07576789B44713BB646E5B04F2FFD", "/updates/0004013000002202.cia"));
        items.push_back(UpdateItem("370090EF93B810585F20D6FB57EC6D9D", "/updates/0004013000002203.cia"));
        items.push_back(UpdateItem("B3527B5626AFAF2F265916CFB010DA5D", "/updates/0004013000002302.cia"));
        items.push_back(UpdateItem("88E8D05C03C8ABE7F90488FFCDC4542C", "/updates/0004013000002303.cia"));
        items.push_back(UpdateItem("4F9F66934955A7ADBD93E97EDADC1BB5", "/updates/0004013000002402.cia"));
        items.push_back(UpdateItem("51FDB8536EB83762B4DD57800CDE08A0", "/updates/0004013000002403.cia"));
        items.push_back(UpdateItem("49BDAB680C5EF513FD1CE51628C799BA", "/updates/0004013000002602.cia"));
        items.push_back(UpdateItem("7309A0B3377BA1369B5ED88E0814307C", "/updates/0004013000002702.cia"));
        items.push_back(UpdateItem("F4992A20462A4A41AEF37D897AEA9B08", "/updates/0004013000002703.cia"));
        items.push_back(UpdateItem("A3F0BD4280F0AE7CFA3CF6747F9DB3C7", "/updates/0004013000002802.cia"));
        items.push_back(UpdateItem("BD042AEDF12EBA60471276E7EA9C3AEE", "/updates/0004013000002902.cia"));
        items.push_back(UpdateItem("FCA89DDC17E3E892516B0F81B8958743", "/updates/0004013000002903.cia"));
        items.push_back(UpdateItem("56DF1365F74AB590E01998B59B8F3D6E", "/updates/0004013000002A02.cia"));
        items.push_back(UpdateItem("65B0A9AE7D7B27BDEEBB6433B6B838F4", "/updates/0004013000002A03.cia"));
        items.push_back(UpdateItem("AA084ADE84FBA71754D2F400080461E4", "/updates/0004013000002B02.cia"));
        items.push_back(UpdateItem("076F92EAB88AA7FE8B15CE214B3DC9D7", "/updates/0004013000002C02.cia"));
        items.push_back(UpdateItem("0616E72CCC3132A6B78BCA6356CAAFC5", "/updates/0004013000002C03.cia"));
        items.push_back(UpdateItem("8B8B762282FA11064DBBDF62C955B5D7", "/updates/0004013000002D02.cia"));
        items.push_back(UpdateItem("E4241DB05B381A418C9946CCB6544880", "/updates/0004013000002D03.cia"));
        items.push_back(UpdateItem("64B50BE151513052186A6E9B5D33E09E", "/updates/0004013000002E02.cia"));
        items.push_back(UpdateItem("14F24E1BA6F840680CA4FA7D9B69B6F1", "/updates/0004013000002E03.cia"));
        items.push_back(UpdateItem("A1634C4EBDE169C55C976670899A5792", "/updates/0004013000002F02.cia"));
        items.push_back(UpdateItem("14D067ECB8FA9180E59EE839A1FB83B0", "/updates/0004013000002F03.cia"));
        items.push_back(UpdateItem("8288B9DFFD5094A15EA30B572ED3514E", "/updates/0004013000003102.cia"));
        items.push_back(UpdateItem("D85788AEFB07B6C07B1DA9B84EE017B1", "/updates/0004013000003103.cia"));
        items.push_back(UpdateItem("152DC04C6818B7015080FED4FF764996", "/updates/0004013000003202.cia"));
        items.push_back(UpdateItem("69E1981ACEA2949DA61EC2612EF5A6C8", "/updates/0004013000003203.cia"));
        items.push_back(UpdateItem("77BC88BF4920AB2A3374DAE426F95DA4", "/updates/0004013000003302.cia"));
        items.push_back(UpdateItem("59050620268E9409D8678AB04B366288", "/updates/0004013000003303.cia"));
        items.push_back(UpdateItem("8677D5ABB45DD8DC6363084A0D122355", "/updates/0004013000003402.cia"));
        items.push_back(UpdateItem("91C5EE12C288575E1BEDBA509B241EB7", "/updates/0004013000003502.cia"));
        items.push_back(UpdateItem("3FAC9782CC5BF6C53059EDD6BE4F0F97", "/updates/0004013000003702.cia"));
        items.push_back(UpdateItem("17597F6112D5B464ADE752D1BBA57007", "/updates/0004013000008002.cia"));
        items.push_back(UpdateItem("A020ED9D40DD8B592551CE98EDEFAC9F", "/updates/0004013000008003.cia"));
        items.push_back(UpdateItem("0C87B77FFD56A21C09EFE8E510966D17", "/updates/0004013800000002.cia"));
        items.push_back(UpdateItem("CBE759D0FE2407E821CF16ACF00D012D", "/updates/0004013800000003.cia"));
        items.push_back(UpdateItem("066A5CE2DB86494A078B4820A0D94A9B", "/updates/0004013800000102.cia"));
        items.push_back(UpdateItem("19D1B2369C1DE20EE46C12D7F1F7677B", "/updates/0004800542383841.cia"));
        items.push_back(UpdateItem("488F4EC7D3686042DE8D3537D24F8EC1", "/updates/00048005484E4441.cia"));
        items.push_back(UpdateItem("E639DFC1F1B6BE51A6467B0E2E281E54", "/updates/0004800F484E4841.cia"));
        items.push_back(UpdateItem("19208AD79EC6C262573448E10A754E5E", "/updates/0004800F484E4C41.cia"));
    }

}
