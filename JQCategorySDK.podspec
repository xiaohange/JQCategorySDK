Pod::Spec.new do |s|
s.name         = "JQCategorySDK"
s.version      = "0.0.1"
s.summary      = "iOS commonly used in Category, convenient and practical library."
s.homepage     = "https://github.com/XiaoHanGe/JQCategorySDK"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author             = { "韩俊强" => "532167805@qq.com" }
s.platform     = :ios, "7.0"
s.ios.deployment_target = "7.0"
s.source       = { :git => "https://github.com/XiaoHanGe/JQCategorySDK.git", :tag => s.version.to_s }
s.requires_arc = true
s.vendored_frameworks = "JQCategorySDK.framework"
end

