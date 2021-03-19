
Pod::Spec.new do |s|

  s.name         = "YHCCBSDK"
  s.version      = "2.0.0"
  s.summary      = "中国建设银行个人网银-建行SDK；2.0.0； "

  s.description  = "中国建设银行个人网银-建行SDK，包含微信支付SDK、支付宝支付、建行手机支付；
2021-3-19:加入CCBNetPaySDK、CCBGovPaySDK、CCBSharedPurseSDK；支持SXRS的ZR-灵活就业缴费"

  s.homepage     = "https://github.com/XmYlzYhkj/YHCCBSDK"

  s.license      = "MIT"

  s.author       = { "XmYhkj" => "yhkj_xm@163.com" }
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHCCBSDK.git", :tag => s.version.to_s }

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  s.frameworks       = 'SystemConfiguration', 'CoreMotion','CFNetwork', 'CoreTelephony', 'QuartzCore', 'CoreText', 'CoreGraphics', 'UIKit', 'Foundation', 'Security'

  s.libraries        = 'z', 'c++', 'sqlite3'

  s.vendored_frameworks = ["Frameworks/*.framework"]
  
  s.resources    = 'Resources/CCBSDK.bundle'

  s.dependency     'AlipaySDK-iOS'

  s.dependency     'WechatOpenSDK'

end
